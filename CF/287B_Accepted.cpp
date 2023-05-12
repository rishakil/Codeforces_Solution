#include<stdio.h>
int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a == 1) printf("%d\n", 0);
	else if (a <= b) printf("%d\n", 1);
	else {
		long long m = ((b - 2) * (b - 1) / 2) + b;
		if (a > m) printf("-1\n");
		else {
			long long lb = 2, ub = b, _lb=0;
			for (int i = 0; ; i++) {
				long long dig = b - lb + 1, mid = (lb + ub) / 2;
				long long sum = 0;
				if (dig % 2 == 0) sum = (b + lb) * (dig / 2) - (dig - 1);
				else sum = (b + lb) * (dig / 2) + lb + (dig / 2) - (dig - 1);
				if (sum == a) {
					printf("%lld\n", dig);
					break;
				}
				else if (sum > a) {
					if (lb == mid) {
						printf("%lld\n", dig);
						break;
					}
					else {
						_lb = lb;
						lb = mid;
						ub = ub;
					}
				}
				else if (sum < a) {
					if (lb == mid) {
						printf("%lld\n", dig + 1);
						break;
					}
					else if (lb == mid - 1) {
						printf("%lld\n", dig + 1);
						break;
					}
					else {
						ub = lb;
						lb = (ub-1 + _lb) / 2;
					}
				}
			}
		}
	}
	return 0;
}

/*
499999998500000001 1000000000
93 17
*/
