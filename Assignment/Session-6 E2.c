#include <stdio.h>

int main(void)
{
    int n, i, count = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array Elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        if(5 == arr[i])
            count++;

    if(count)
        printf("5 have found in the list\n");
    else
        printf("5 have not found in the list\n");

    return 0;
}
