#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define gap ' '
#define ll long long
int main() {
	int n; cin >> n;
	map <string, ll> v, v1;
	for(int i=0; i<n; i++) {
		string x; ll y; cin >> x >> y;
		v[x] = y;
		v1[x]++;
	/*	cout << v[x] << endl;
		v.insert(make_pair(x, y));*/
	}
	for(auto c : v) cout << c.first << " : " << c.second << " --> " << v1[c.first] << endl;
	return 0;
}