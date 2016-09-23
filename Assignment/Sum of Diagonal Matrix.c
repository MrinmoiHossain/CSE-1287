#include <stdio.h>

int main(void)
{
    int mat[3][3], i, j, sum = 0;

    printf("Enter the value of matrix:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            if(i == j){
                sum += mat[i][j];
            }
        }
    }

    printf("Diagonal Sum = %d\n", sum);

    return 0;
}
