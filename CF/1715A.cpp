#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &a, &b);
		if (a==1 && b==1) printf("%d\n", 0);
		else if (a==b) printf("%d\n", 2*a+b-2);
		else {
			(a>b) ? printf("%d\n", 2*b+a-2) : printf("%d\n", 2*a+b-2);
		}
	}
	return 0;
}