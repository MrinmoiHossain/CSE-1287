#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("Enter two numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x >= y && x >= z)
        printf("The maximum number is: %d\n", x);
    else if(y >= x && y >= z)
        printf("The maximum number is: %d\n", y);
    else
        printf("The maximum number is: %d\n", z);

    return 0;
}
