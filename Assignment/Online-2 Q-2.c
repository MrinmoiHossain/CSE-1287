#include <stdio.h>

int main(void)
{
    int n, i, sumNeg = 0, sumPosOd = 0, sumPosEv = 0;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] < 0)
            sumNeg += arr[i];
        else if(arr[i] > 0 && arr[i] % 2 == 0)
            sumPosEv += arr[i];
        else
            sumPosOd += arr[i];
    }
    printf("Sum_neg = %d\n", sumNeg);
    printf("Sum_posEv = %d\n", sumPosEv);
    printf("Sum_posOd = %d\n", sumPosOd);

    return 0;
}
