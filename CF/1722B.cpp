#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a;
		char b[102];
		char c[102];
		scanf("%d", &a);
		scanf("%s", b);
		scanf("%s", c);
		int d = strcmp(b,c);
		if (d == 0) printf("YES\n");
		else {
			for (int i = 0; i < a; i++) {
				if (b[i] == 'B') {
					b[i] = 'G';
				}
			}

			for (int i = 0; i < a; i++) {
				if (c[i] == 'B') {
					c[i] = 'G';
				}
			}
			if (strcmp(b,c) == 0) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}