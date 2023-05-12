#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		if(n==3) printf("%d", -1);
		else if(n%2==0) {
			for(int i=n; i>0; i--) {
				printf("%d ", i);
			}
		}
		else {
			int m = (n/2)+1;
			for(int i=n; i>m; i--) {
				printf("%d ", i);
			}
			for(int i=1; i<=m; i++) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}