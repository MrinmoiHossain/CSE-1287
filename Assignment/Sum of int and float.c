#include <stdio.h>

int main(void)
{
    int wholeNum;
    float decFrac;

    printf("Enter a whole number: ");
    scanf("%d", &wholeNum);
    printf("Enter a decimal number: ");
    scanf("%f", &decFrac);

    float sum = wholeNum + decFrac;

    printf("The sum of the number is: %f\n", sum);

    return 0;
}
