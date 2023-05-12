#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n, q;
		scanf("%lld %lld", &n, &q);
		long long arr[n + 5];
		for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
		long long evnstr[n + 5], oddstr[n + 5], evn = 0, odd = 0, evnsum = 0, oddsum = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {
				evnsum += arr[i];
				evnstr[evn++] = arr[i];
			}
			else {
				oddsum += arr[i];
				oddstr[odd++] = arr[i];
			}
		}

		long long typ, x, ef = 0;
		for (int i = 0; i < q; i++) {
			scanf("%d %d", &typ, &x);
			if (typ == 0) {
				if (evnstr[0] % 2 == 0) {
					evnsum += evn * x;
					evnstr[0] += x;
				}
				if (oddstr[0] % 2 == 0) {
					oddsum += odd * x;
					oddstr[0] += x;
				}

				printf("%lld\n", evnsum + oddsum);
			}
			else {
				if (oddstr[0] % 2 != 0) {
					oddsum += odd * x;
					oddstr[0] += x;
				}
				if (evnstr[0] % 2 != 0) {
					evnsum += evn * x;
					evnstr[0] += x;
				}

				printf("%lld\n", evnsum + oddsum);
			}
		}

	}
	return 0;
}

/*
4
1 1
1
1 1
3 3
1 2 4
0 2
1 3
0 5
6 7
1 3 2 4 10 48
1 6
0 5
0 4
0 5
1 3
0 12
0 1
6 7
1000000000 1000000000 1000000000 11 15 17
0 17
1 10000
1 51
0 92
0 53
1 16
0 1


1 2 4
0 2
1 3
0 5

0 2
1 4 6 -- 11
1 3
4 4 6 -- 14
0 5





2
11
14
29
80
100
100
100
118
190
196
3000000094
3000060094
3000060400
3000060952
3000061270
3000061366
3000061366

*/