#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		(n%2==0) ? cout << n/2 <<'\n': cout << n/2+1 << '\n';
	}
	return 0;
}