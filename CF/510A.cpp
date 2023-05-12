#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int p=1;
	for (int i = 1; i <= a; i++) {
		int m = i % 2;
		if (m == 0) {
			if (p % 2 == 0) {
				printf("#");
				for (int j = 0; j < b - 1; j++) printf(".");
			}
			else {
				for (int j = 0; j < b - 1; j++) printf(".");
				printf("#");
			}
			p++;
		}
		else for (int k = 0; k < b; k++) printf("#");
		printf("\n");
	}
	return 0;
}