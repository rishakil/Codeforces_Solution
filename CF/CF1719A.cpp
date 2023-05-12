#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b;
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&a, &b);
		if(a%2==0 && b%2!=0) printf("Burenka\n");
		else if(a%2!=0 && b%2==0) printf("Burenka\n");
		else printf("Tonya\n");
	}
	return 0;
}