#include <stdio.h>
#include <string.h>

int main() {

    int n, t;
    scanf("%d %d", &n, &t);
    char student[150];
    bool use[150];
    scanf("%s", student);

    for (int i = 0 ; i < t; i++) {

        for (int j  =  0 ; j < n ; j++) {

            use[j] = true;

        }

        for (int j = 0 ; j < n ; j++) {

            if (student[j - 1] == 'B' && student[j] == 'G' && use[j - 1] == true && use[j] == true) {

                student[j - 1] = 'G';
                student[j]   = 'B';

                use[j - 1] = false;

                use[j] = false;
            }
        }
    }

    printf("%s", student);

    return 0 ;
}
