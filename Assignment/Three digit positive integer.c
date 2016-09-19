#include <stdio.h>

int main(void)
{
    int num; // input number between 1 to 999

    scanf("%d", &num);

    if(!(num >= 1 && num <= 99))
        printf("The input number is 3-digit number\n");
    else
        printf("Ihe number is between 1 - 99\n");

    return 0;
}
