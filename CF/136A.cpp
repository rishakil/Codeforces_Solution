#include<bits/stdc++.h>
using namespace std;
int main(){
    int p, q, a[101], b[101];
    scanf("%d",&p);
    for(q=1;q<=p;q++){
        scanf("%d",&a[q]);
        b[a[q]]=q;
    }
    for(q=1;q<=p;q++) printf("%d ",b[q]);
    return 0;
}
