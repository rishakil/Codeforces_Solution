#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define gap " "
#define TxtIO() freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
int main() {
  ll n, q; cin >> n >> q;
  vector<ll> card(55);
  for (int i = 0; i < n; i++) {
    ll x; cin >> x;
    if (!card[x]) card[x] = i + 1;
  }
  while (q--) {
    ll t; cin >> t;
    cout << card[t] << gap;
    for (int i = 1; i <= 50; i++) {
      if (card[i] < card[t]) card[i]++;
    }
    card[t] = 1;
  }
  cout << endl;
  return 0;
}