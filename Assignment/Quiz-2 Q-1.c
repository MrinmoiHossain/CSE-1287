#include<stdio.h>

int main()
{
    int arr[7]={1,2,3,9,8,7,5},i,sum=0;

    for(i=0;i<7;i++){
            if(i%3==0)
                sum+=arr[i];
    }
    printf("Sum= %d", sum);

    return 0;
}
