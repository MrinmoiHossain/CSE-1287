#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a numbers: ");
    scanf("%d", &n);

    if(n % 13 == 0)
        printf("The number is divisible by 13\n");
    else
        printf("The number is not divisible by 13\n");

    return 0;
}
