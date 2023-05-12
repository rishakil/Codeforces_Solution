#include<bits/stdc++.h>
int main() {
	int a,b[1004], c, count=0;
	scanf("%d %d", &a, &c);

	for(int i=0; i<a; i++) {
		scanf("%d", &b[i]);
		if(b[i]>c) count=count+2;
		else count++;
	}
	
		printf("%d ", count);
}