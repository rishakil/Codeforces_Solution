#include<stdio.h>
int main() {
	char s[3],_s[15];
	scanf("%s ", s);
	gets(_s);
	int flag=0;
	for(int i=0; i<2; i++) {
		int k=0;
		for(int j=0; k<5; j=j+3) {
			if(s[i] == _s[j] || s[i] == _s[j+1]) {
				flag=1;
				break;
			}
			k++;
		}
		if(flag==1) break;
	}
	printf((flag==0) ? "NO":"YES");
	return 0;
}