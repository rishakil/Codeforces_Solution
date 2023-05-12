#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	char _a[a+1];
	scanf("%s", _a);
	int m=0;
	for(int i=1; ; i++) {
		m = m+i;
		if(_a[m-1]>= 'a' && _a[m-1]<='z') printf("%c", _a[m-1]);
		else break;
	}
	return 0;
}