#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d %d", &n, &k);
		long long arr[n + 1];
		for (int i = 0; i < n; i++) {
			scanf("%lld", &arr[i]);
		}
		for (int i = 0; i < k; i++) {
			for (int j = i + k; j < n; j = j + k) {
				if (arr[i] < arr[j]) {
					arr[i] = arr[j];
				}
			}
		}
		long long sum = 0;
		for (int i = 0; i < k; i++) {
			sum = sum + arr[i];
		}
		printf("%lld\n", sum);
	}
	return 0;
}