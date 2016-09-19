#include <stdio.h>

int prime(int a, int i);

int main(void)
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n); // input n >= 2
    i = n /2;

    if(prime(n, i))
        printf("The number is prime number\n");
    else
        printf("The number is not a prime number\n");
    return 0;
}

int prime(int a, int i)
{
    if(i == 1)
        return 1;
    else if(a % i == 0)
        return 0;
    else
        return prime(a, i - 1);
}

