#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int m;
		scanf("%d", &m);
		int p = (m + 1) / 2;
		printf("%d\n", p);
		for (int i = 0; i < p; i++) {
			printf("%d %d\n", 3 * i + 1, 3 * m);
			m--;
		}
	}
	return 0;
}

/*

1
9

1 6
2 9
4 12
5 15
7 18
8 21
10 24
11 27
*/