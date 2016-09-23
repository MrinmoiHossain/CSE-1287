#include <stdio.h>

int main(void)
{
    int hour;

    printf("Enter an hour: ");
    scanf("%d", &hour);

    if(hour >= 0 && hour <= 24)
        printf("Thank you!!\n");
    else
        printf("Invalid Entry\n");

    return 0;
}
