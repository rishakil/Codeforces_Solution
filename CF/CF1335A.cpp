#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, a;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		(n%2==0) ? printf("%d\n", n/2-1) : printf("%d\n", n/2);
	}
	return 0;
}