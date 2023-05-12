#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int m, init=0, count=0;
		char _s[105];
		scanf("%s", _s);
		m=strlen(_s);
		int fin=m-1;
		while(_s[init]!='1') {
			init++;
			if(init>m-1) break;
		}
		while(_s[fin]!='1') {
			fin--;
			if(fin<0) break;
		}
		for(int i=init; i<=fin; i++) {
			if(_s[i]=='0') count++;
		}
		printf("%d", count);
	}
	return 0;
}