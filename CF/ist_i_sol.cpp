#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
  ll n, t, x, c, ans = 0;
  cin >> n;
  deque<pair<ll, ll>> q;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t == 1) {
      cin >> x >> c;
      auto tt = make_pair(x, c);
      q.emplace_back(tt);
    }
    else {
      ans = 0;
      cin >> c;
      while (c != 0) {
        auto tt = q.front();
        q.pop_front();
        if (c >= tt.second) {
          c -= tt.second;
          ans += tt.first * tt.second;
        }
        else {
          ans += tt.first * c;
          tt.second -= c;
          c = 0;
          q.emplace_front(tt);
        }
      }
      cout << ans << endl;
    }

  }
}