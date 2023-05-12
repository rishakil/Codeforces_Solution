#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long int s, n,k,b;
		scanf("%d %d %d %lld", &n, &k, &b, &s);
		if(b==0) {
			for(int i=0; i<n-1; i++) {
				printf("%d\n", 0);
			}
		}
		else if(s<k*b || k*b<s-k*b) printf("-1\n");
		else if (k*b>s-k*b) {
			
			for(int i=0; i<n-1; i++) {
				printf("%d ", 0);
			}
			printf("%lld\n",b*k);
		}
	}
	return 0;
}