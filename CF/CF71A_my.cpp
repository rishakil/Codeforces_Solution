#include <stdio.h>
#include <string.h>
int main()
{
    int p;
    char word[100];

    scanf("%d", &p);
    for (int n = 1; n <= p; n++)
    {
        scanf("%s", word);
        int count = strlen(word);
        (count > 10) ? printf("%c%d%c\n", word[0], count - 2, word[count - 1]) : printf("%s\n", word);
    }
    return 0;
}