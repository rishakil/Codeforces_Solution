#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n + 5], b[n + 5];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &b[i]);
		}
		//int c = strcmp(a, b);
		int  flag = 0;
		for(int i=0; i<n; i++) {
			if(a[i] != b[i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) printf("%d\n", 0);
		else {
			int count = 0, count_a = 0, count_b = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] != b[i]) count++;
			}

			for (int i = 0; i < n; i++) {
				if (a[i] == 0) count_a++;
			}
			for (int i = 0; i < n; i++) {
				if (b[i] == 0) count_b++;
			}
			int d = abs(count_a - count_b);
			if (count_a == count_b) printf("%d\n", 1);
			else if(count<(d+1)) printf("%d\n", count);
			else printf("%d\n", d+1);
		}
	}
	return 0;
}