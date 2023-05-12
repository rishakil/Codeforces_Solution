#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define gap " "
#define TxtIO() freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	ll t; cin >> t;
	queue <ll> q;
	while (t--) {
		int opt;
		cin >> opt;
		if (opt == 1) {
			ll n; cin >> n;
			q.push(n);
		}
		else if (opt == 2) {
			if (!q.empty()) q.pop();
		}
		else if (opt == 3) {
			if (!q.empty()) cout << q.front() << endl;
			else cout << "Empty!" << endl;
		}
	}
	return 0;
}