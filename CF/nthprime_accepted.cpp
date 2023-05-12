#include<bits/stdc++.h>
using namespace std;
#define toint(a)  atoi(a.c_str())
#define pb        push_back
#define lb        lower_bound
#define ull       unsigned long long
#define ll        long long int
const int mod = 1000000007;
bool  check[200];
ll i, j;
ll is_prime[10000000];
map<ll, ll>m, ans;
void sieve(ll n) {
    vector<ll>v;

    for (i = 2; i <= 10000000; i++)
    {
        if (is_prime[i] == 0) {
            v.pb(i);
            for (j = i * 2; j <= 10000000; j += i) {
                is_prime[j] = 1;
            }
        }
    }

    cout << v[n - 1] << endl;
}
int main()
{
    ll n; cin >> n;
    sieve(n);
    return 0;
}