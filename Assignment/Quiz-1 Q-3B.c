#include <stdio.h>

int main(void)
{
    int week;

    printf("Enter the number of weeks: ");
    scanf("%d", &week);

    printf("Total number of days: %d\n", 7 * week);

    return 0;
}
