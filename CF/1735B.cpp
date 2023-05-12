#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		long long int arr[n + 5];
		for (int i = 0; i < n; i++) {
			scanf("%lld", &arr[i]);
		}
		if (n == 1) printf("%d\n", 0);
		else {
			long long int a = arr[0];
			long long int sum = 0;
			for (int i = 1; i < n; i++) {
				if (arr[i] >= a * 2) {
					double b = (float) arr[i] / (a * 2 - 1);
					int c = (int) b;
					if (b > c) sum = sum + b;
					else sum = sum + b - 1;
				}
			}
			printf("%lld\n", sum);
		}
	}
	return 0;
}