#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define gap " "
#define TxtIO() freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)

int main() {
    ll n; string str;
    cin >> n >> str;
    deque<ll> dq = {n};
    for (ll i = n - 1; i >= 0; i--) {
        (str[i] == 'L') ? dq.push_back(i) : dq.push_front(i);
    }
    for (ll i = 0; i <= n; i++) {
        if (i < n) cout << dq[i] << gap;
        else cout << dq[i] << endl;
    }
    return 0;
}