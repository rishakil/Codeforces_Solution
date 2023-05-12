#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, temp=0;
		char s[11];
		scanf("%d", &n);
		scanf("%s", s);
		if (n == 5) {
			for(int i=0; i<strlen(s); i++) {
				for(int j=i+1; j<strlen(s); j++) {
					if(s[i]>s[j]) {
						temp = s[i];
						s[i] = s[j];
						s[j] = temp;
					}
				}
			}
			int flag = strcmp(s, "Timru");
			printf((flag==0) ? "YES\n":"NO\n");
		}
		else printf("NO\n");
	}
	return 0;
}