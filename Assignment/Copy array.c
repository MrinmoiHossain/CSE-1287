#include <stdio.h>

int main(void)
{
    int i, arr[10], copArr[10];

    for(i = 0; i < 10; i++)
        arr[i] = (i + 1) * (i + 1);

    printf("The array value is: ");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(i = 0; i < 10; i++)
        copArr[i] = arr[i];
    printf("The copy array is: ");
    for(i = 0; i < 10; i++)
        printf("%d ", copArr[i]);
    printf("\n");

    return 0;
}
