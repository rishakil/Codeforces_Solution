#include<stdio.h>
int main() {
    int t;
    char _s[4];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", _s);
        (_s[0]=='y' || _s[0]=='Y') && (_s[1]=='e' || _s[1]=='E') && (_s[2]=='S' || _s[2]=='s') ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}