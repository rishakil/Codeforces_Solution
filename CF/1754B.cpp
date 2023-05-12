#include <bits/stdc++.h>
using namespace std;
#define print(array) { for (auto x : array) cout << x << gap; cout << endl; }
#define sortd(arr, n) sort(arr, arr + n, greater<long long>());
#define sorta(arr, n) sort(arr, arr + n);
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int p = n / 2;
		if (n % 2 == 0) {
			for (int i = p+1; i <= n; i++) {
				printf("%d ", i);
				printf("%d ", i - p);
			}
		}
		else {
			for (int i = p+1; i < n; i++) {
				printf("%d ", i);
				printf("%d ", i - p);
			}
			printf("%d", n);
		}
		printf("\n");
	}
	return 0;
}