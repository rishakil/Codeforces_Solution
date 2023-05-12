#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int count=(n-1)/3;
	if((n-1)%3==0) {
		int _count=count-1;
		int p=n-1-_count;
		printf("%d", 2*p+2);
	}
	else printf("%d", 2*(n-count)+1);
	return 0;
}