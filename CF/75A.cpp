#include<stdio.h>
#include<math.h>
void _DarkHorse_();
int main() {
	_DarkHorse_();
	return 0;
}

void _DarkHorse_() {
	int a, b, i=0, j=0, _a[11], _b[11], _c[11];
	scanf("%d", &a);
	scanf("%d", &b);
	int c=a+b;
	while(a>0) {
		int d=a%10;
		if(d!=0) {
			_a[i] = d;
			i++;
		}
		a=a/10;
	}
	while(b>0) {
		int d=b%10;
		if(d!=0) {
			_b[j] = d;
			j++;
		}
		b=b/10;
	}
	int l=0;
	while(c>0) {
		int d=c%10;
		if(d!=0) {
			_c[l] = d;
			l++;
		}
		c=c/10;
	}
	int p=0;
	for(int x=0;x<i;x++) p=p+_a[x]*pow(10,x);

	int q=0;
	for(int x=0;x<j;x++) q=q+_b[x]*pow(10,x);

	int r=0;
	for(int x=0;x<l;x++) r=r+_c[x]*pow(10,x);
	printf((p+q==r) ? "YES":"NO");
}