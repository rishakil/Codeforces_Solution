#include<stdio.h>
int main() {
	int n, a=0, b=0, count=0;
	scanf("%d", &n);
	scanf("%d", &a);
	for(int i=0; i<n-1; i++) {
		scanf("%d", &b);
		if(b != a) {
			count++;
			a = b;
		}
	}
	printf("%d\n", count+1);
	return 0;
}