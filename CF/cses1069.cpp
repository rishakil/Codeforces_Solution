#include<bits/stdc++.h>
using namespace std;
int main() {
	string s; cin >> s;
	int max = 1, cnt = 0;
	char c = s[0];
	for(int i=0; i<s.size(); i++) {
		if(s[i]==c) {
			cnt++;
			c = s[i];
		}
		else {
			c = s[i];
			if(cnt>max) max = cnt;
			cnt = 1;
		}
	}
	(cnt>max) ? cout << cnt << '\n' : cout << max <<'\n';
	return 0;
}