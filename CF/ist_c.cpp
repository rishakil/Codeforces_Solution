#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
	stack <char> st;
	string str; cin >> str;
	int n = str.size();
	for(int i=0; i<n; i++) {
		if(str[i]>= 'a' && str[i]<= 'z') st.push(str[i]);
		else st.pop();
	}
	n = st.size();
	vector<char> ans;
	while(!st.empty()) {
		ans.push_back(st.top());
		st.pop();
	}
	reverse(ans.begin(), ans.end());
	for(auto x: ans) cout << x;
	cout << endl;
	return 0;
}