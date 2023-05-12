#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		string _s = "Yes";
		if(s[0] == 'Y' || s[0] == 'e' || s[0] == 's') {
			int m;
			if(s[0] == 'Y') m = 0;
			else if(s[0] == 'e') m = 1;
			else m = 2;
			int flag = 0;
			for(int i=0; i<s.size(); i++) {
				if(s[i] != _s[m]) {
					flag = 1;
					break;
				}
				m++;
				if(m==3) m = 0;
			}
			(flag==1) ? cout <<"NO" : cout << "YES";
		}
		else cout << "NO";
		cout << '\n';
	}
	return 0;
}