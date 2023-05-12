#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, p1=0, p1mark=0, p2=0, p2mark=0, p3=0, p3mark=0;
		scanf("%d ", &n);
		int m = 3*n+n;
		char a[m], b[m], c[m];
		gets(a);
		gets(b);
		gets(c);
		//p1mark
		int q=0;
		for(int i=0; q<n; i=i+4) {
			int p=0;
			for(int j=0; p<n; j=j+4) {
				if((a[i]==b[j] && a[i+1] ==b[j+1]) && a[i+2] ==b[j+2]) {
					p1++;
					break;
				}
				p++;
			}
			int r=0;
			for(int j=0; r<n; j=j+4) {
				if((a[i]==c[j] && a[i+1] ==c[j+1]) && a[i+2] ==c[j+2]) {
					p1++;
					break;
				}
				r++;
			}
			if(p1==0) p1mark=p1mark+3;
			else if(p1==1) p1mark=p1mark+1;
			else p1mark=p1mark+0;
			p1=0;
			q++;
		}

		//p2_mark
		int x=0;
		for(int i=0; x<n; i=i+4) {
			int y=0;
			for(int j=0; y<n; j=j+4) {
				if((b[i]==a[j] && b[i+1] ==a[j+1]) && b[i+2] ==a[j+2]) {
					p2++;
					break;
				}
				y++;
			}
			int z=0;
			for(int j=0; z<n; j=j+4) {
				if((b[i]==c[j] && b[i+1] ==c[j+1]) && b[i+2] ==c[j+2]) {
					p2++;
					break;
				}
				z++;
			}
			if(p2==0) p2mark=p2mark+3;
			else if(p2==1) p2mark=p2mark+1;
			else p2mark=p2mark+0;
			p2=0;
			x++;
		}

		//p3mark
		int s=0;
		for(int i=0; s<n; i=i+4) {
			int t=0;
			for(int j=0; t<n; j=j+4) {
				if((c[i]==a[j] && c[i+1] ==a[j+1]) && c[i+2] ==a[j+2]) {
					p3++;
					break;
				}
				t++;
			}
			int u=0;
			for(int j=0; u<n; j=j+4) {
				if((c[i]==b[j] && c[i+1] ==b[j+1]) && c[i+2] ==b[j+2]) {
					p3++;
					break;
				}
				u++;
			}
			if(p3==0) p3mark=p3mark+3;
			else if(p3==1) p3mark=p3mark+1;
			else p3mark=p3mark+0;
			p3=0;
			s++;
		}

		printf("%d %d %d\n", p1mark, p2mark, p3mark);
	}
	return 0;
}

/*

	This problem and the solution I have come up with, as of now, is the
	best one in term of the perseverence I have showed here.
	When my code showed the result of the first test case and it resembled
	the judge's output it made me feel like I am the happiest person in this world!!!

*/