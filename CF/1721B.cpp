#include<stdio.h>
#include<stdlib.h>
int main() {
	int t,n,m,sx,sy,d;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d %d", &n, &m, &sx, &sy, &d);
		printf(((abs(1-sx)<=d || abs(m-sy)<=d) && (abs(1-sy)<=d || abs(n-sx)<=d)) ? "-1\n":"%d\n", m+n-2);
	}
	return 0;
}