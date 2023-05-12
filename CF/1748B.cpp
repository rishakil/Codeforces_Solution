#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			vector<int> cnt (10);
			int diff = 0;
			for (int j = i; j < min(i + 288, n); j++) {
				auto c = s[j] - '0';
				if (cnt[c] == 0) {
					diff++;
				}
				cnt[c]++;
				if (*max_element(all(cnt)) <= diff) {
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}