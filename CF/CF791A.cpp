#include <stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d %d", &a, &b);
    for (i=1; ; i++)
    {
        a=a*3;
        b=b*2;
        count++;
        if(a>b) break;
    }
    printf("%d", count);
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j;
    cin>>a>>b;
    for(i=1;;i++){
        a*=3;
        b*=2;
        if(a>b) break;
    }
    cout<<i<<endl;
    return 0;
}
*/