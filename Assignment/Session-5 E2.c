#include <stdio.h>

int main(void)
{
    int n, i, j = 1, k = 1;

    printf("The multiplication table of 5 using for loop:\n");
    for(i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", 5, i, 5 * i);

    printf("\nThe multiplication table of 5 using While loop:\n");
    while(j <= 10){
        printf("%d * %d = %d\n", 5, j, 5 * j);
        j++;
    }

    printf("\nThe multiplication table of 5 using Do-while loop:\n");
    do{
        printf("%d * %d = %d\n", 5, k, 5 * k);
        k++;
    }while(k <= 10);


    return 0;
}
