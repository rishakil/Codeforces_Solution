#include<bits/stdc++.h>
int main() {
	int t;
	scanf("%d", &t);
	long long int a,b,c,d;
	while(t--) {
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		if (a*d==b*c) printf("%d\n", 0);
		else if((a==0 && c>0) || (a>0 && c==0)) printf("%d\n", 1);
		else {
			long long int g = a*d;
			long long int h = b*c;
			if ((g%h ==0) || (h%g ==0)) printf("%d\n", 1);
			else printf("%d\n", 2);
		}
	}
	return 0;
}