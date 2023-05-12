#include <bits/stdc++.h>
using namespace std;

long long GCD(long long x, long long y) {
	if (y == 0) return x;
	return GCD(y, x % y);
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n, flag = 0;
		scanf("%d", &n);
		long long arr[n + 5], _GCD = 0;
		for (int i = 0; i < n; i++) {
			scanf("%lld", &arr[i]);
			_GCD = GCD(_GCD, arr[i]);
		}
		if (_GCD == 1) printf("%d", 0);
		else if (GCD(_GCD, n) == 1) printf("%d", 1);
		else if (GCD(_GCD, n - 1) == 1) printf("%d", 2);
		else printf("%d", 3);
		printf("\n");
	}
	return 0;
}

/*
9
1
1
1
2
2
2 4
3
3 6 9
4
5 10 15 20
5
120 60 80 40 80
6
150 90 180 120 60 30
6
2 4 6 9 12 18
6
30 60 90 120 125 125


*/