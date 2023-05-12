#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			printf("%d", 1);
			if (i >= 2) {
				if (i >= 3) {
					for (int k = 0; k < i - 2; k++) {
						printf(" %d", 0);
					}
				}
				printf(" %d", 1);
			}
			printf("\n");
		}
	}
	return 0;
}

/*
1
1 1
1 0 1
*/