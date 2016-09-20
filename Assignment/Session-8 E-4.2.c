#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("Enter row number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--){
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(j = 1; j <= (2 * i) - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
