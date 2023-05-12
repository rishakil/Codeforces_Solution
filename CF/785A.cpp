#include<stdio.h>
#include<string.h>
int main() {
	int a, _value=0;
	char _a[20];
	scanf("%d", &a);
	while(a--) {
		scanf("%s", _a);
		if(_a[0]=='I') _value+=20;
		else if(_a[0]=='T') _value+=4;
		else if(_a[0]=='C') _value+=6;
		else if(_a[0]=='O') _value+=8;
		else if(_a[0]=='D') _value+=12;
	}
	printf("%d", _value);
	return 0;
}