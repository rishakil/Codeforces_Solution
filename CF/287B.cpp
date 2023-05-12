#include<stdio.h>
int main() {
	long long n, k, l, _sum, sum, midval, dig;
	int flag = 0;
	scanf("%lld %lld", &n, &k);
	_sum = k + (((k - 2) * (k - 1)) / 2); // 2 3 4 5 6 7 8 9 || 11 12 13 14
	if (n > _sum) {
		printf("%d", -1);
	}
	else if (n <= k) printf("%d\n", 1);
	else {
		l = k - 1;
		midval = l + 1;
		for (int i = 0; ; i++) {
			dig = k - midval + 1;
			(dig % 2 != 0) ? sum = (midval + k) * (dig / 2) + midval + (dig / 2) - (dig - 1) : sum = (midval + k) * (dig / 2) - (dig - 1); // 16
			if (sum == n) {
				printf("%lld", dig);
				break;
			}

			else if (sum > n) {
				//l = l / 2;
				midval = midval + dig/2;
			}

			else if (sum<n){
				if (l == 1) {
					printf("%lld", dig + 1);
					break;
				}
				//l = l / 2;
				midval = midval - (l-dig);
			}

		}
	}
	return 0;
}