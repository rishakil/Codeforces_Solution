#include<stdio.h>
int main()
{
    int i, j, m, x, y, z;
    scanf("%d", &m);
    int count = 0;

    while(m--) {
        scanf("%d %d %d", &x, &y, &z);
        if (x + y + z >= 2) count++;
        else continue;
    }
    printf("%d", count);
    return 0;
}