#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("(");
        for(j = 1; j <= i; j++){
            printf("%d", j);
            if(j < i)
                printf("+");
        }
        printf(")");
        if(i < n)
            printf("+");
    }
    printf("\n");

    return 0;
}
