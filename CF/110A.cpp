#include<stdio.h>
int main() {
	char c;
	int n=0;
	for(;;) {
		scanf("%c", &c);
		if(c=='4'||c=='7') n++;
		if(c=='\n' || c== ' ') break; 
	}
	printf((n==7 || n==4) ? "YES":"NO");
	return 0;
}