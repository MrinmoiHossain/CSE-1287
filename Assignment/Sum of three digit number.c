#include <stdio.h>

int main(void)
{
    int n, d1, d2, d3, r;

    scanf("%d", &n);

    if(n <= 99)
        printf("The number too short\n");
    else if(n > 100 && n < 1000){
        d1 = n / 100;
        r = n % 100;
        d2 = r / 10;
        d3 = r % 10;

        printf("The sum of %d, %d and %d is: %d\n", d1, d2, d3, d1 + d2 + d3);
    }
    else
        printf("Ihe number is too long\n");

    return 0;
}

