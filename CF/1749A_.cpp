#include<bits/stdc++.h>
using namespace std;
#define sorta(arr, n) sort(arr, arr + n);
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int m, n;
		scanf("%d %d", &n, &m);
		int arr_a[m], arr_b[m];

		for (int i = 0; i < m; i++) {
			scanf("%d %d", &arr_a[i], &arr_b[i]);
		}
		if(n==1) printf("NO\n");
		else if (m == 1 || m < n) printf("YES\n");
		else {
			int flag1 = 0, flag2 = 0, p = 0, q = 0;
			sorta(arr_a, m);
			sorta(arr_b, m);
			for (int i = 0; i < m - 1; i++) {
				if (arr_a[i] != arr_a[i + 1]) {
					p = 1;
					break;
				}
				if (arr_b[i] != arr_b[i + 1]) {
					q = 1;
					break;
				}
			}
			if (p == 0 || q == 0) printf("NO\n");
			else {
				for (int i = 0; i < m; i++) {
					if (arr_a[i] != i + 1) {
						flag1 = 1;
						break;
					}
					if (arr_b[i] != i + 1) {
						flag2 = 1;
						break;
					}
				}
				printf((flag1 == 1 || flag2 == 1) ? "YES\n" : "NO\n");
			}
		}
	}
	return 0;
}