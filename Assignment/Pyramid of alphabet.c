#include <stdio.h>


int main(void)
{
    int H = 5, SP = 5, i, j;
    char K = 'A';

    for(i = 0; i < H; i++){
        for(j = 1; j <= (SP - i); j++)
            printf("\t");
        for(j = 1; j <= (2 * i) + 1; j++)
            printf("%c\t", K++);
        printf("\n");
    }

    return 0;
}

