#include <stdio.h>

int main(void)
{
    int arr[3][4], i, j, max;

    printf("Enter the matrix value:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);

    max = arr[0][0];
    for(i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
            if(arr[i][j] > max)
                max = arr[i][j];


    printf("The maximum number is: %d\n", max);
}
