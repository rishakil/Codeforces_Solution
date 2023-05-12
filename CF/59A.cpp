#include <stdio.h>
#include <stdlib.h>

#include <string.h>

char a[99];
char b[10];

int d = 0;
int g = 0;
int m = 0 ;
int main()
{
    scanf("%s", a);
    int c = strlen(a);
    for (int i = 0 ; i <= (c - 1); i++) {
        if (a[i] < 91) {
            m = m + 1;
        } else {
            g = g + 1;
        }

    }
    if (g < m) {
        for (int i = 0; i <= (c - 1); i++) {
            if (a[i] > 91) {
                a[i] = a[i] - 32;
            }
        }
    } else {
        for (int i = 0; i <= (c - 1); i++) {
            if (a[i] < 91) {
                a[i] = a[i] + 32;
            }
        }
    }

    for (int j = 0; j <= (c - 1); j++) {
        printf("%c", a[j]);
    }

    return 0;

}