#include <stdio.h>

int main(void)
{
    int mat1[3][2], mat2[3][2], sum[3][2], i, j;

    printf("Enter the 1st matrix data:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter the 2nd matrix data:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &mat2[i][j]);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("The sum of the two matrix is: \n");
    j = 0;
    for(i = 0; i < 3; i++)
        printf("%d\t%d\n", sum[i][j], sum[i][j+1]);

    return 0;
}
