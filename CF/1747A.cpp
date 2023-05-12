#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		long long sum = 0, a;
		for (int i = 0; i < n; i++) {
			scanf("%lld", &a);
			sum += a;
		}
		printf("%lld\n", abs(sum));
	}
	return 0;
}