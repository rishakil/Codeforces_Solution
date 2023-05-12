#include<stdio.h>
int main() {
	int _a, n, p, q, flag=0;
	scanf("%d", &n);
	scanf("%d", &p);
	int a[n];
	for (int i=0; i<n; i++) a[i] = 0;
	for (int i=0; i<p; i++) {
		scanf("%d", &_a);
		a[_a-1] = 1;
	}
	scanf("%d", &q);
	for (int i=0; i<q; i++) {
		scanf("%d", &_a);
		a[_a-1] = 1;
	}
	for (int i=0; i<n; i++) {
		if(a[i]==0) {
			flag=1;
			break;
		}
	}
	printf((flag==0) ? "I become the guy.": "Oh, my keyboard!");
	return 0;
}