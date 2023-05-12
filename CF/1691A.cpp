#include<bits/stdc++.h>
using namespace std;

int main()
{  
    int tc, i;
    scanf("%d", &tc); 
    while(tc--)
    {
    	int count=0;
        char s[105];
        scanf("%s", s);
        for(i=0; s[i]!='\0'; i++) count++;
        int l = count;
    	//printf("%d", count);
        
        bool ok=0;
        
        if(l%2==0)
        {
            for(i=0; i<l/2; i++)
            {
                if(s[i]!=s[l/2 + i])
                {
                    //printf("NO\n");
                    ok=1; break;
                }
            }
            (ok==1) ? printf("NO\n"): printf("YES\n");
        }
        else printf("NO\n");
    } 
}