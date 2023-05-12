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
    int mnt, hr, h1, m1, h2, m2;
    char separator;
    cin >> h1 >> separator >> m1 >> h2 >> separator >> m2;
    if (m2 < m1) {
        mnt = (60 + m2) - m1;
        hr = h2 - (h1 + 1);
    }
    else {
        mnt = m2 - m1;
        hr = h2 - h1;
    }
    int midmin = (60*hr+mnt)/2;
    int hour = midmin/60;
    int minute = midmin - (hour*60);
    int hourmid, minmid;
    dbg(minute, hour);
    if(m1+minute > 59) {
        minmid = (m1+minute)-60;
        hourmid = h1+hour+1;
    }
    else {
        minmid = m1+minute;
        hourmid = h1+hour;
    }
    dbg(minmid, hourmid);
    cout << setw(2) << setfill('0') << hourmid << separator << setw(2) << setfill('0') << minmid <<endl;
    return 0;
}