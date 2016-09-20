#include <stdio.h>

int main(void)
{
    int basic, perc;
    double total;

    printf("Enter basic salary: ");
    scanf("%d", &basic);
    printf("Enter the house rent percent: ");
    scanf("%d", &perc);

    total = basic + (basic * ((double)perc / 100));

    printf("Total salary: %0.2lf\n", total);

    return 0;
}
