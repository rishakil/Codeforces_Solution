#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a, b, n, min=0, max=0, count=0;
		scanf("%d %d %d", &a, &b, &n);
		if(a>=b) {
			max=a;
			min=b;
		}
		else {
			max=b;
			min=a;
		}
		while(true) {
			min=min+max;
			if (min<=n) {
				count++;
				max=max+min;
				if(max<=n) {
					count++;
				}
				else break;
			}
			else break;
		}
		printf("%d\n", count+1);
	}
}