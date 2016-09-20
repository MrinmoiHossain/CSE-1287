#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The differences between %d cube and %d square is: %d\n", a, b, a * a * a - b * b);

    return 0;
}
