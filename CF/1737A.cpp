#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long int l, r;
		scanf("%lld %lld", &l, &r);
		long long int p = sqrtl(l);
		long long int q = sqrtl(r);
		if(p*p == l && r == q*(q+2)) printf("%lld\n", 3*(q-p+1));
		else {
			long long int count = 0;

			if(l==p*p) count+=3;
			else if(l>p*p && l<=p*(p+1)) count+=2;
			else if(l>p*(p+1)) count++;

			if(r<q*(q+1)) count++;
			else if(r>= q*(q+1) && r<q*(q+2)) count+=2;
			else if(r==q*(q+2)) count+=3;
			long long int ans = count+(3*(q-p-1));
			printf("%lld\n", ans);

		}
	}
	return 0;
}

/*

5
8 19
8 20
119 121
1 100000000000000000
1234567891011 1000000000000000000



5
6
2
948683296
2996666667

*/