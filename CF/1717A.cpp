#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", n+(n/2)*2+(n/3)*2);
	}
	return 0;
}