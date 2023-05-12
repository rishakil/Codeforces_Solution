#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define gap " "
#define TxtIO() freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b

stack<ll int> s, m;
int main() {
	int t, x;
	ll int v, mx = -1;

	scanf("%d", &t);
	while (t--) {
		scanf("%d", &x);
		if (x == 1) {
			scanf("%lld", &v);
			if (mx == -1 || m.empty()) {
				mx = v;
			}
			else {
				mx = MAX(m.top(), v);
			}
			s.push(v);
			m.push(mx);
		}
		else if (x == 2) {
			s.pop();
			m.pop();
		}
		else {
			printf("%lld\n", m.top());
		}
	}
	return 0;
}
