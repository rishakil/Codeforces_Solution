#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d", &t);
	char ts1[55], ts2[55];
	while (t--) {
		scanf("%s", ts1);
		scanf("%s", ts2);
		int m = strlen(ts1);
		int n = strlen(ts2);
		int p = strcmp(ts1, ts2);
		if (p == 0) printf("=\n");
		else {
			if (ts1[m - 1] == ts2[n - 1]) {
				if (ts1[m - 1] == 'S') {
					if (m > n) printf("<\n");
					else printf(">\n");
				}
				else {
					if (m > n) printf(">\n");
					else printf("<\n");
				}
			}
			else {
				if (ts1[m - 1] == 'L') printf(">\n");
				else if (ts1[m - 1] == 'S') printf("<\n");
				else {
					if (ts2[n - 1] == 'S') printf(">\n");
					else printf("<\n");
				}
			}
		}
	}
	return 0;
}

/*

6
XXXS XS
XXXL XL
XL M
XXL XXL
XXXXXS M
L M

*/