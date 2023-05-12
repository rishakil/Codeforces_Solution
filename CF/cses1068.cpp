#include<stdio.h>
int main() {
	long long int n; scanf("%lld", &n);
	long long int p = n;
	printf("%lld ", p);
	while (true) {
		if (p == 1) break;
		else {
			if (p % 2 == 0) {
				printf("%lld ", p / 2);
				p /= 2;
			}
			else {
				printf("%lld ", p * 3 + 1);
				p = p* 3 + 1;
			}
		}
	}
	return 0;
}