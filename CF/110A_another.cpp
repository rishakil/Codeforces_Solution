#include<stdio.h>
int main() {
	char c;
	int count=0;
	for(;;) {
		scanf("%c", &c);
		if(c==55||c==52) count++;
		if(c=='\n' || c==' ') break;
	}
	printf((count==7 || count==4) ? "YES":"NO");
	return 0;
}