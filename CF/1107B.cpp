#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        long long n, k;
        scanf("%lld %lld", &n, &k);
        printf("%lld\n", k+(n-1)*9);
    }
    return 0;
}