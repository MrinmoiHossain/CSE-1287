#include <stdio.h>

int main(void)
{
    int n, a, b, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the starting number: ");
    scanf("%d", &a);
    printf("Enter the finishing number: ");
    scanf("%d", &b);

    for(i = a; i <= b; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
