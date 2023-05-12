#include<bits/stdc++.h>
using namespace std;
void _printf(int x, long long int *y);
long long int _Max(int _zero, int _one, long long int *z_arr, long long int *o_arr);
void _DarkHorse_();
void _DarkHorse_2();

long long n, sum, t[100005];
vector<long long> a, b;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		//_DarkHorse_();
		_DarkHorse_2();
	}
	return 0;
}

void _printf(int x, long long int *y) {
	for (int i = 0; i < x; i++) printf("%lld ", y[i]);
	printf("\n");
}

long long int _Max(int _zero, int _one, long long int *z_arr, long long int *o_arr) {
	long long int sum1 = 0, sum2 = 0;
	for (int i = 0; i < _zero; i++) {
		sum1 += z_arr[i];
		sum1 += o_arr[i];
	}
	sum1 *= 2;
	for (int i = _zero; i < _one; i++) sum1 += o_arr[i];
	for (int i = 0; i < _zero - 1; i++) sum2 += z_arr[i];
	for (int i = 0; i < _zero; i++) sum2 += o_arr[i];
	sum2 *= 2;
	for (int i = _zero; i < _one; i++) sum2 += o_arr[i];
	sum2 += z_arr[_zero - 1];
	return (sum1 > sum2) ? sum1 : sum2;
}

void _DarkHorse_() {
	int n;
	scanf("%d", &n);
	int a[n + 4];
	long long int b[n + 4];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i++) scanf("%lld", &b[i]);
	int _zero = 0, _one = 0;
	for (int i = 0; i < n; i++) (a[i] == 0) ? _zero++ : _one++;

	long long int sum1 = 0;
	long long int sum2 = 0;

	if (_zero == 0 || _one == 0) {
		for (int i = 0; i < n; i++) sum1 += b[i];
		printf("%lld\n", sum1);
	}
	else {
		long long int z_arr[_zero + 4], o_arr[_one + 4];
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

		if (_zero > 0) {
			for (int i = 0; i < _zero - 1; i++) {
				long long int temp = 0;
				for (int j = i + 1; j < _zero; j++) {
					if (z_arr[j] > z_arr[i]) {
						temp = z_arr[j];
						z_arr[j] = z_arr[i];
						z_arr[i] = temp;
					}
				}
			}
		}

		if (_one > 0) {
			for (int i = 0; i < _one - 1; i++) {
				long long int temp = 0;
				for (int j = i + 1; j < _one; j++) {
					if (o_arr[j] > o_arr[i]) {
						temp = o_arr[j];
						o_arr[j] = o_arr[i];
						o_arr[i] = temp;
					}
				}
			}
		}

		if (_zero < _one) printf("%lld\n", _Max(_zero, _one, z_arr, o_arr));
		else if (_one < _zero) printf("%lld\n", _Max(_one, _zero, o_arr, z_arr));
		else {
			for (int i = 0; i < _zero; i++) {
				sum1 += z_arr[i];
				if (i < _zero - 1) sum1 += o_arr[i];
			}
			sum1 = (sum1 * 2) + o_arr[_zero - 1];

			for (int i = 0; i < _zero; i++) {
				sum2 += o_arr[i];
				if (i < _zero - 1) sum2 += z_arr[i];
			}
			sum2 = (sum2 * 2) + z_arr[_zero - 1];
			printf("%lld\n", (sum1 > sum2) ? sum1 : sum2);
		}
	}
}

void _DarkHorse_2() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
	}
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		sum += x;
		if (t[i] == 0) a.push_back(x);
		else b.push_back(x);
	}
	sort(a.rbegin(), a.rend()), sort(b.rbegin(), b.rend());
	int sa = a.size(), sb = b.size();
	for (int i = 0; i < min(sa, sb); i++) {
		sum += a[i], sum += b[i];
	}
	if (sa == sb) {
		sum -= min(a[sa - 1], b[sb - 1]);
	}
	cout << sum << "\n";
	a.clear(), b.clear();
	sum = 0;
}



/*

4
4
0 1 1 1
1 10 100 1000
6
0 0 0 1 1 1
3 4 5 6 7 8
3
1 1 1
1000000000 1000000000 1000000000
1
1
1



2112
63
3000000000
1

*/