#include<stdio.h>
#include<string.h>
int main() {
	char a[101], b[101];
	int count = 0;
	scanf("%s", a);
	scanf("%s", b);
	int c = strlen(a);
	int d = strlen(b);
	if (c != d) printf("NO");
	else {
		int flag = 0;
		for (int i = 0; i < c; i++) {
			if (a[i] != b[c - 1 - i]) {
				flag = 1;
			}
		}
		printf((flag == 0 ? "YES" : "NO"));
	}
	return 0;
}