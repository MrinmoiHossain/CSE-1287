#include <stdio.h>

int main(void)
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    if(sum >= 10 && sum <= 20)
        printf("The sum is fall between 10 to 20\n");
    else
        printf("The sum is not fall between 10 to 20\n");

    return 0;
}
