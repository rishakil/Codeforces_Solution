#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int sum=0, count=0;
	for(int i=1; sum<=a ;i++) {
		sum=sum+(i*(i+1)/2);
		count++;
	}
	printf("%d", count-1);
	return 0;
}