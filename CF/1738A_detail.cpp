#include<bits/stdc++.h>
using namespace std;

void _printf(int x, long long int *y) {
	for (int i = 0; i < x; i++) {
		printf("%lld ", y[i]);
	}
	printf("\n");
}

long long int _Max(int _zero, int _one, long long int *z_arr, long long int *o_arr) {
	long long int sum1 = 0, sum2 = 0;
	for (int i = 0; i < _zero; i++) {
		sum1 += sum1 + (z_arr[i] * 2);
		sum1 = sum1 + (o_arr[i] * 2);
	}
	for (int i = _zero; i < _one; i++) {
		sum1 = sum1 + o_arr[i];
	}
	//method2
	for (int i = 0; i < _zero - 1; i++) {
		sum2 = sum2 + (z_arr[i] * 2);
	}
	for (int i = 0; i < _zero; i++) {
		sum2 = sum2 + (o_arr[i] * 2);
	}
	for (int i = _zero; i < _one; i++) {
		sum2 = sum2 + o_arr[i];
	}
	sum2 = sum2 + z_arr[_zero - 1];
	//printf("%lld %lld\n", sum1, sum2);
	if (sum1 > sum2) return sum1;
	else return sum2;
}


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		int a[n + 1];
		long long int b[n + 1];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			scanf("%lld", &b[i]);
		}

		// Counting zero & one
		int _zero = 0, _one = 0, flag = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) _zero++;
			else _one++;
		}

		long long int sum1 = 0;
		long long int sum2 = 0;

		if (_zero == 0 || _one == 0) {
			for (int i = 0; i < n; i++) {
				sum1 = sum1 + b[i];
			}
			printf("%lld\n", sum1);
		}
		else {
			//printf("%d %d %d\n", _zero, _one, flag);
			long long int z_arr[_zero + 1], o_arr[_one + 1];

			//Creating array of zero and one individually
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


			//_______If zero exist______
			/*if (_zero > 0) {
				//_printf(_zero, z_arr);

				//sorting the zero array in descending order
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
				//_printf(_zero, z_arr);
			}


			//_____if one exist____
			if (_one > 0) {
				//_printf(_one, o_arr);

				//sorting the one array in descending order
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

				//_printf(_one, o_arr);
			}*/

			//Previously I got TLE due to my raw sorting method
			if (_zero > 0) sort(z_arr, z_arr + _zero, greater<long long int>());
 
			if (_one > 0) sort(o_arr, o_arr + _one, greater<long long int>());

			if (_zero < _one) {
				long long int _max = _Max(_zero, _one, z_arr, o_arr);
				printf("%lld\n", _max);
			}
			else if (_one < _zero) {
				long long int _max = _Max(_one, _zero, o_arr, z_arr);
				printf("%lld\n", _max);
			}
			else {
				for (int i = 0; i < _zero; i++) {
					sum1 = sum1 + (z_arr[i] * 2);
					if (i < _zero - 1) {
						sum1 = sum1 + (o_arr[i] * 2);
					}
				}
				sum1 = sum1 + o_arr[_zero - 1];

				for (int i = 0; i < _zero; i++) {
					sum2 = sum2 + (o_arr[i] * 2);
					if (i < _zero - 1) {
						sum2 = sum2 + (z_arr[i] * 2);
					}
				}
				sum2 = sum2 + z_arr[_zero - 1];
				//printf("%lld %lld\n", sum1, sum2);
				if (sum1 > sum2) printf("%lld\n", sum1);
				else printf("%lld\n", sum2);
			}
		}
	}
	return 0;
}