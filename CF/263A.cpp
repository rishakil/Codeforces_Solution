#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,x,y, a[6][6];
    
    for(i = 1;i<=5;i++) {
       for(j =1;j<=5;j++) {
         scanf("%d",&a[i][j]);
         if(a[i][j] == 1) x = i; y = j;
        }
    }

    (x > 3) ? n = x - 3 : n = 3 - x;
    (y > 3) ? n = n + y -3 : n = n + 3 -y;

    printf("%d",n);
    return 0;
}