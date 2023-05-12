#include<stdio.h>
int main() {
	char ltr[105];
	scanf("%s", ltr);
	int flag = 0;
	if ((ltr[0] >= 'a' || ltr[0] >= 'A') && (ltr[0] <= 'z' || ltr[0] <= 'Z')) {
		for (int i = 1; ltr[i] != '\0'; i++) {
			if (ltr[i] >= 'a' && ltr[i] <= 'z') {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0) {
		for (int i = 0; ltr[i] != '\0'; i++) (ltr[i] >= 'a' && ltr[i] <= 'z') ? ltr[i] = ltr[i] - 32 : ltr[i] = ltr[i] + 32;
		printf("%s\n", ltr);
	}
	else printf("%s\n", ltr);
	return 0;
}

//((ltr[i] >= 'A' || ltr[i] >= 'a') && (ltr[i] <= 'Z' || ltr[i] <= 'z'))