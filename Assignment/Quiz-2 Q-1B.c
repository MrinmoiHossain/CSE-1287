#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,9,8,7}, i, sum = 0;

    for(i = 0; i < 6; i++){
        if(i % 3 == 0)
            sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
