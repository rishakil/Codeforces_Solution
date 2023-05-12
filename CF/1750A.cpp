#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int arr[n+1];
		for(int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		printf((arr[0] == 1) ? "YES\n":"NO\n");
	}
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    if(a[0]==1)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
}
*/

/*

7
3
1 2 3
3
1 3 2
7
5 3 4 7 6 2 1
7
7 6 5 4 3 2 1
5
2 1 4 5 3
5
2 1 3 4 5
7
1 2 6 7 4 3 5

Yes
Yes
No
No
No
No
Yes


*/