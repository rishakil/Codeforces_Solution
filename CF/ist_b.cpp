#include<bits/stdc++.h>
using namespace std;
int main() {
	vector <int> v;
	int n, ser = 0, dim = 0; cin >> n;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	int init = 0, fin = n-1;
	for(int i=1; i<=n; i++) {
		if(i%2 !=0) {
			if(v[init]>v[fin]) {
				ser+=v[init];
				init++;
			}
			else {
				ser+=v[fin];
				fin--;
			}
		}
		else {
			if(v[init]>v[fin]) {
				dim+=v[init];
				init++;
			}
			else {
				dim+=v[fin];
				fin--;
			}
		}
	}
	cout << ser << " " << dim << endl;
	return 0;
}