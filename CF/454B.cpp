#include<stdio.h>
int is_non_decreasing(int x, int y, int *arr) {
	if (y == 1) return 1;
	else {
		int flag = 1;
		for (int i = x; i < y-1; i++) {
			if (arr[i + 1] < arr[i]) flag = 0;
		}
		return flag;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int str[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d ", &str[i]);
	}
	int flag = is_non_decreasing(0, n, str);
	if (flag == 1) printf("%d\n", 0);
	else {
		int p = 0, q = 0, j = 0, str1[n], str2[n];
		for (int i = 0; i < n - 1; i++) {
			if (q == 0) {
				if (str[i] <= str[i + 1]) {
					str1[p] = str[i];
					str1[p + 1] = str[i + 1];
					p++;
				}
				else {
					if (p == 0) str1[0] = str[0];
					str2[q] = str[i + 1];
					q++;
				}
			}
			else {
				if (str[i] <= str[i + 1]) {
					str2[q] = str[i + 1];
					q++;
				}
				else {
					printf("%d\n", -1);
					return 0;
				}
			}

		}
		/*for (int i = 0; i < n; i++) {
			printf("%d ", str[i]);
		}
		printf("\n");
		for (int i = 0; i < p + 1; i++) {
			printf("%d ", str1[i]);
		}
		printf("\n");
		for (int i = 0; i < q; i++) {
			printf("%d ", str2[i]);
		}
		printf("\n");
		printf("%d %d", p, q);
		printf("\n");*/

		int flag2 = is_non_decreasing(0, p + 1, str1);
		int flag3 = is_non_decreasing(0, q, str2);
		//printf("%d %d\n", flag2, flag3);
		if(flag2==1 && flag3==1) { // 2 1 3
			int ok = 0;
			if(str1[0] < str2[0]) {
				if(str1[p] <= str2[0]) printf("%d", q);
				else printf("%d", -1);
			}
			else if(str1[0]>str2[0]) {
				if(str2[q-1] <= str1[0]) printf("%d", q);
				else printf("%d", -1);
			}
			else {
				if(str1[0]==str2[q-1]) printf("%d", q);
				else printf("%d", -1);
			}
		}

	}
	return 0;
}

/*for(int i=0; i<n; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	for(int i=0; i<p+1; i++) {
		printf("%d ", str1[i]);
	}
	printf("\n");
	for(int i=0; i<q; i++) {
		printf("%d ", str2[i]);
	}
	printf("\n");
	printf("%d %d", p, q);
*/