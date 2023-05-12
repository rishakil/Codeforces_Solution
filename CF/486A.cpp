#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	scanf("%lld", &n);
	(n%2==0) ? printf("%lld", n/2) : printf("%lld", (n-1)/2-n);
	return 0;
}