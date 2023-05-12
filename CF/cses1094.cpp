#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	long long ans = 0, a = 0, temp = 0;
	cin >> temp;
	for(int i=0; i<n-1; i++) {
		cin >> a;
		if(a<temp) {
			ans += temp-a;
			temp = a+(temp-a);
		}
		else temp = a;
	}
	cout << ans <<'\n';
	return 0;
}