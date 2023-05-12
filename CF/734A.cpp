#include<stdio.h>
#include<string.h>
int main() {
	int n,a=0,d=0;
	char c;
	scanf("%d", &n);
	n+=1;
	while(n--) {
		//if(c!='\n') break;
		scanf("%c", &c);
		if(c=='D') d++;
		else if(c=='A') a++;
	}
	if(a==d) printf("Friendship");
	else printf((a>d)? "Anton":"Danik");
	return 0;
}


/*

Remark:   Learnt a lot about scanf's behavious in console.
It creates buffer of newline. So input all the data at a time doesn't conflict with scanf.

*/