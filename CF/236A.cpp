#include<stdio.h>
int main()
{
    int i, l = 0, j, temp, count = 0;
    char s[101];
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++){
        l++;
    }
 
    for(i = 0; i < l; i++){
        for(j = 0; j < l - i -1; j++){
            if(s[j] > s[j+1]) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("%s",s);
}