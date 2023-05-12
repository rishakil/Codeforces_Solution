#include<stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		long long n; scanf("%lld", &n);
		char arr[n + 2];
		int count = 0;
		scanf("%s", arr);
		if (n == 1) printf("%d\n", 0);
		else {
			int m = 0;
			for(int i=0; i<n; i++) {
				if(arr[i]=='1') {
					m = i;
					break;
				}
			}
			char a = arr[m];
			for (int i = m; i < n; i++) {
				if (arr[i] != a) {
					a = arr[i];
					count++;
				}
			}
			printf("%d\n", count);
		}
	}
}

/*
0
1
2
1
2
3
1
5
*/