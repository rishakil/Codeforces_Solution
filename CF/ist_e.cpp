#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define gap " "
#define TxtIO() freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    fastIO;
    string s; cin >> s;
    int q, t; cin >> q;
    bool rev = false;

    deque<char> d;
    for (int i = 0; i < s.length(); ++i) d.push_back(s[i]);

    for (int i = 0; i < q; ++i) {
        cin >> t;
        if (t == 1) rev = !rev;
        else if (t == 2) {
            int f; char c;
            cin >> f >> c;
            ((f - 1) == (int)rev) ? d.push_front(c) : d.push_back(c);
        }
    }

    string ans = "";
    while (!d.empty()) {
        ans += d.front();
        d.pop_front();
    }
    if (rev) reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}