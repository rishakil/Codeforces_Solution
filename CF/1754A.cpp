#include<stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int a;
		scanf("%d", &a);
		char str[a + 2];
		scanf("%s", str);
		int q = 0;
		for(int i=0; i<a; i++) {
			if(str[i]=='Q') q++;
			else if(q>0) q--;
		}
		printf((q==0) ? "YES\n" : "NO\n");
	}
	return 0;
}

/*
5
4
QQAA
4
QQAQ
3
QAA
1
Q
14
QAQQAQAAQQQAAA


*/