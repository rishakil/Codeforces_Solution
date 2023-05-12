#include<stdio.h>
int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	long long a = m/n;
	if(n==m) printf("%d", 0);
	else if((a%2!=0 && a%3!=0) || m%n!=0) printf("%d", -1);
	else {
		int i = 0;
		while(a>1) {
			if(a%2==0) {
				a = a/2;
				i++;
			}
			else if(a%3==0) {
				a = a/3;
				i++;
			}
			else {
				printf("%d", -1);
				return 0;
			}
		}
		printf("%d", i);
	}
	return 0;
}

/*
1 223092870
*/
