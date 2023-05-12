#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define gap " "
#define TxtIO() freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)

int main() {
	deque <pair<ll, ll>> cyl;
	int q; cin >> q;
	while (q--) {
		ll type; cin >> type;
		if (type == 1) {
			ll label, n; cin >> label >> n;
			cyl.emplace_back(make_pair(label, n));
		}
		else {
			ll n; cin >> n;
			auto x = cyl.front();
			if (n <= x.second) {
				cout << n*x.first << endl;
				cyl.front().second -= n;
				if (cyl.front().second == 0) cyl.pop_front();
			}
			else {
				ll ans = 0;
				while (n != 0) {
					if (n > cyl.front().second) {
						auto p = cyl.front();
						n -= p.second;
						cyl.pop_front();
						ans += (p.first * p.second);
					}
					else {
						ans += (cyl.front().first * n);
						cyl.front().second = cyl.front().second - n;
						n = 0;
						if (cyl.front().second == 0) cyl.pop_front();
					}
				}
				cout << ans << endl;
			}
		}
	}
	return 0;
}
/*
358927247018939370
224623944275491698
*/