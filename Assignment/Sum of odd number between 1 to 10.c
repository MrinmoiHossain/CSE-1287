#include <stdio.h>

int main(void)
{
    int i = 1, sum = 0;

    while(i <= 10){
        if(i % 2 == 0){
            i++;
            continue;
        }
        sum += i;
        i++;
    }
    printf("The sum of odd number is: %d\n", sum);

    /* The second way */
    int j = 10, sum1 = 0;
    while(j--){
        if(j % 2 == 0)
            continue;
        sum1 += j;
    }

    printf("The sum of odd number is: %d\n", sum1);

    return 0;
}
