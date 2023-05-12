#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		long long arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%lld", &arr[i]);
		}
		sort(arr, arr + n);
		long long Max = 0;
		for (int i = 2; i < n; i++) {
			Max = max(Max, 2 * arr[i] - arr[i - 1] - arr[0]);
		}
		for (int i = n - 1; i > 1; i--) {
			Max = max(Max, arr[n - 1] + arr[i - 1] - 2 * arr[i - 2]);
		}
		printf("%lld\n", Max);
	}
	return 0;
}

/*
5
7
6
6
4
6
63

3
5
3 1 5 2 3
4
17 8 19 45
8
265 265 265 265 265 265 265 265
*/