#include<stdio.h>
int main() {
	int t; scanf("%d", &t);
	while(t--) { int a, b; scanf("%d %d", &a, &b); (a==1 || b==1) ? printf("1 1\n") : printf("2 2\n"); }
	return 0;
}