#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((pow(a,3) + pow(b,3) + pow(c,3)) == pow(d,3))
        printf("The given equation is satisfied\n");
    else
        printf("The given equation is not satisfied\n");

    return 0;
}
