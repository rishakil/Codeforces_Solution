#include<bits/stdc++.h>
using namespace std;
#define gap ' '
#define endl '\n'
#define pb push_back
#define print(array) for(auto x : p) cout << x <<gap; cout << endl;
//#define _42_
#ifdef _42_
#include "DarkHorse/debug.h"
#else
#define dbg(...) 71
#endif
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            for (int i = 0; i < n; i++) cout << 1 << " ";
        }
        else {
            for (int i = 0; i < n - 2; i++) cout << 2 << " ";
            cout << 3 << " " << 1;
        }
        cout << endl;
    }
    return 0;
}