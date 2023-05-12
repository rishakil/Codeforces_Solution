#include<stdio.h>
int main() {
	int t; scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int arr[n+5];
		for(int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		int a = 9-n;
		int b = (a*(a+1))/2;
		printf("%d\n", b*6);
	}
	return 0;
}