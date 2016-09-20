#include <stdio.h>

int main(void)
{
    int row, column, i, j;

    printf("Enter the matrix row number: ");
    scanf("%d", &row);
    printf("Enter the matrix column number: ");
    scanf("%d", &column);

    int matrix[row][column], copyMatrix[row][column];

    printf("Enter the matrix value:\n");
    for(i = 0; i < row; i++)
        for(j = 0; j < column; j++)
            scanf("%d", &matrix[i][j]);

    printf("\nThe input matrix is:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    for(i = 0; i < row; i++)
        for(j = 0; j < column; j++)
            copyMatrix[i][j] = matrix[i][j];

    printf("\nThe copy matrix is:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++)
            printf("%d ", copyMatrix[i][j]);

        printf("\n");
    }

    return 0;
}
