#include<stdio.h>
int main() {
	int n, flag=0;
	scanf("%d", &n);
	while(n--) {
		int a;
		scanf("%d", &a);
		if(a==1) {
			flag=1;
			break;
		}
	}
	printf((flag==1) ? "HARD":"EASY");
	return 0;
}