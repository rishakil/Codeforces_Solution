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
    string a = "/";
    int n; cin >> n;
    while(n--) {
        string b;
        cin >> b;
        if(b == "pwd") cout << a <<endl;
        else {
            if(b[3]== '/') {
                for(int i=3; i<b.size(); i++) { // cd /a/b/c/../d/e;
                    if(b[i]=='.') {
                        a[i-1] = '0';
                        for(int j=i-2; a[j] != '/'; j--) {
                            a[j] = '0';
                        }
                    }
                    else a[i] = b[i];
                }
            }
            else {

            }
        }
    }
    return 0;
}