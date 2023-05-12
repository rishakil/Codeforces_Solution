#include<bits/stdc++.h>
using namespace std;
#define toint(a)  atoi(a.c_str())
#define pb        push_back
#define mkp       make_pair
#define lb        lower_bound
#define ull       unsigned long long
#define ll        long long int
#define inf      (long long)1e18
const int mod=1000000007;
ll prime(ll x)
{
    for(ll e=3; e*e<=x; e+=2)
    {
        if(x%e==0) return false;
    }
       return x;
}
ll i,j,k;
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(0);
      cout.tie(0);
           ll n; cin>>n;
          vector<ll>v; v.pb(2);
          //printf("%d\n", v.size());
          for(i=3; v.size()<n; i+=2)
          {
              if(prime(i)) v.pb(i);
          }
              cout<<v[n-1]<<endl;
      return 0;
}