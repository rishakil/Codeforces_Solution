#include<stdio.h>
#include <string.h>
int main() {
    int a; //count =0;
    char word[100];
    scanf("%d", &a);
    while(a--) {
        int count = 0;
        scanf("%s", word);
        for (int i = 0; word[i] != '\0'; i++) {
            count++;
        }
        //printf("%d\n", count);
        (count <= 10) ? printf("%s\n", word) : printf("%c%d%c\n", word[0], count-2 ,word[count-1]);
    }
    return 0;
}