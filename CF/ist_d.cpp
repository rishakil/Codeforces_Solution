#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define gap " "
int main() {
	ll n; cin >> n;
	vector <ll> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	if (n == 1) cout << v[0];
	else {
		for (int i = n - 1; i >= 0; i -= 2) cout << v[i] << gap;
		if (n % 2 == 0) {
			for (int i = 0; i < n; i += 2) cout << v[i] << gap;
		}
		else {
			for (int i = 1; i < n; i += 2) cout << v[i] << gap;
		}
	}
	return 0;
}