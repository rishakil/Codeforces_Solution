#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int _c[n*2];
	int k=0;
	for(int i=0; k<n; i=i+2) {
		scanf("%d %d", &_c[i], &_c[i+1]);
		k++;
	}
	int max=_c[1];
	int m=0, p=max;
	for(int i=0; m<n-2; i=i+2) {
		p=p-_c[i+2]+_c[i+3];
		if(p>max) max=p;
		m++;
	}
	printf("%d", max);
}