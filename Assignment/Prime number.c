#include <stdio.h>

int main(void)
{
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n / 2; i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The number is a prime\n");
    else
        printf("The number is not a prime\n");

    return 0;
}
