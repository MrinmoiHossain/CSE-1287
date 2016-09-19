#include <stdio.h>

int factorial(int a);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n); // input between 0 to 12

    printf("The factorial of %d is: %d\n", n, factorial(n));

    return 0;
}

int factorial(int a)
{
    if(a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}
