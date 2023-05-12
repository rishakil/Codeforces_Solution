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
#define ll long long int

int main(){
    string S;
    cin>>S;
    ll b=0,s=0,c=0,nb,ns,nc,pb,ps,pc,r,ans=0;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(ll i=0;i<S.size();i++){
        if(S[i]=='S')   s++;
        else if(S[i]=='B')  b++;
        else c++;
    }
    
    while(1){
        if(nb<b)    r-=pb*(b-nb),nb=b;
        if(ns<s)    r-=ps*(s-ns),ns=s;
        if(nc<c)    r-=pc*(c-nc),nc=c;
        if(r<0) break;
        ans++;
        nb-=b,ns-=s,nc-=c;
        if(nb==0 && nc==0 && ns==0) break;
    }
    if(r>0) ans+=r/(b*pb+s*ps+c*pc);
    cout<<ans<<endl;
    return 0;
}