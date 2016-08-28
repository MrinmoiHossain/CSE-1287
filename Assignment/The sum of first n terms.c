#include <stdio.h>

int main(void)
{
    int n, i, sum =0;

    printf("Enter nth numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        sum += (i + 1) * (i + 2);

    printf("The sum of first %dth terms is: %d\n", n, sum);

    return 0;
}
