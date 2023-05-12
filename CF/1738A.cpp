#include<bits/stdc++.h>
using namespace std;

void _printf(int x, long long int *y) {
	for (int i = 0; i < x; i++) printf("%lld ", y[i]);
	printf("\n");
}

long long int _Max(int _zero, int _one, long long int *z_arr, long long int *o_arr) {
	long long int sum1 = 0, sum2 = 0;
	for (int i = 0; i < _zero; i++) {
		sum1 = sum1 + (z_arr[i] * 2);
		sum1 = sum1 + (o_arr[i] * 2);
	}
	for (int i = _zero; i < _one; i++) sum1 = sum1 + o_arr[i];
	for (int i = 0; i < _zero - 1; i++) sum2 = sum2 + (z_arr[i] * 2);
	for (int i = 0; i < _zero; i++) sum2 = sum2 + (o_arr[i] * 2);
	for (int i = _zero; i < _one; i++) sum2 = sum2 + o_arr[i];
	sum2 = sum2 + z_arr[_zero - 1];
	return (sum1 > sum2) ? sum1 : sum2;
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		int a[n + 1];
		long long int b[n + 1];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) scanf("%lld", &b[i]);
		int _zero = 0, _one = 0, flag = 0;
		for (int i = 0; i < n; i++) (a[i] == 0) ? _zero++ : _one++;

		long long int sum1 = 0;
		long long int sum2 = 0;

		if (_zero == 0 || _one == 0) {
			for (int i = 0; i < n; i++) sum1 = sum1 + b[i];
			printf("%lld\n", sum1);
		}
		else {
			long long int z_arr[_zero + 1], o_arr[_one + 1];
			int _Z = 0, _O = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] == 0) {
					z_arr[_Z] = b[i];
					_Z++;
				}
				else {
					o_arr[_O] = b[i];
					_O++;
				}
			}

			if (_zero > 0) sort(z_arr, z_arr + _zero, greater<long long int>());

			if (_one > 0) sort(o_arr, o_arr + _one, greater<long long int>());

			if (_zero < _one) printf("%lld\n", _Max(_zero, _one, z_arr, o_arr));
			else if (_one < _zero) printf("%lld\n", _Max(_one, _zero, o_arr, z_arr));
			else {
				for (int i = 0; i < _zero; i++) {
					sum1 = sum1 + (z_arr[i] * 2);
					if (i < _zero - 1) sum1 = sum1 + (o_arr[i] * 2);
				}
				sum1 = sum1 + o_arr[_zero - 1];

				for (int i = 0; i < _zero; i++) {
					sum2 = sum2 + (o_arr[i] * 2);
					if (i < _zero - 1) sum2 = sum2 + (z_arr[i] * 2);
				}
				sum2 = sum2 + z_arr[_zero - 1];
				printf("%lld\n", (sum1 > sum2) ? sum1 : sum2);
			}
		}
	}
	return 0;
}