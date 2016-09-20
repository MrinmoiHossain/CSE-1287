#include <stdio.h>

double salaryCal(int a, int b);

int main(void)
{
    int basic, perc;
    double total;

    printf("Enter basic salary: ");
    scanf("%d", &basic);
    printf("Enter the house rent percent: ");
    scanf("%d", &perc);

    total = salaryCal(basic, perc);

    printf("Total salary: %0.2lf\n", total);

    return 0;
}

double salaryCal(int a, int b)
{
    return a + (a * ((double)b / 100));
}
