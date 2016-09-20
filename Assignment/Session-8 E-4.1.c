#include <stdio.h>

int main(void)
{
    int n, i, j, k;
    char ch = 'A';

    printf("Enter the row number: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 1; j < n - i; j++)
            printf(" ");

        for(j = 1; j <= (i + 1); j++)
            printf("%c", ch);
        ch++;
        printf("\n");
    }

    return 0;
}
