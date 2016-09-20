#include <stdio.h>

int main(void)
{
    int n = 5, i, j;
    char ch = 'A';

    for(i = 0; i < n; i++){
        for(j = 1; j <= i + 1; j++){
            printf("%c", ch++);
            if(j < i + i)
                printf("\t");
        }

        printf("\n");
    }

    return 0;
}
