#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %dth array value: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i % 2 != 0)
            sum += arr[i];
    }
    printf("The sum of odd indexes is: %d\n", sum);

    return 0;
}
