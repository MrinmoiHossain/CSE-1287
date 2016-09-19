#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int m, n;

    printf("Enter a number: ");
    scanf("%d %d", &m, &n);

    printf("The lcm of %d and %d is: %d\n", m, n, (m * n) / gcd(m, n));

    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}



