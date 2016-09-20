#include <stdio.h>

int main(void)
{
    int i, tem[12][30], monAvg[12], j, sum = 0;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 30; j++){
            scanf("%d", &tem[i][j]);

            sum += tem[i][j];
        }
        monAvg[i] = sum / 30;

        printf("The average temperature of %d month is: %d\n", i + 1, monAvg[i]);
        sum = 0;
    }

    return 0;
}
