#include<stdio.h>
int main() {
	int i, n,k,y, count=0;
	scanf("%d %d", &n, &k);
	int _y[n+4];
	for(int i=0; i<n; i++) {
		scanf("%d ", &_y[i]);
		if(_y[i] <= 5-k) count++;
	}
	printf("%d", count/3);
}