#include<stdio.h>
void printzero(int x) {
	for (int i = 0; i < x; i++) {
		printf(" %d", 0);
	}
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (n == 1) printf("%d\n", 1);
		else if (n == 2) printf("%d\n%d %d\n", 1, 1, 1);
		else {
			printf("%d\n", 1);
			printf("%d %d\n", 1 , 1);
			for (int i = 0; i < n - 2; i++) {
				printf("%d", 1);
				printzero(i + 1);
				printf(" %d\n", 1);
			}
		}
	}
	return 0;
}