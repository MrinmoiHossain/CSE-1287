#include <stdio.h>

int main(void)
{
    int row, column, i, j, sum = 0;

    printf("Enter the matrix row number: ");
    scanf("%d", &row);
    printf("Enter the matrix column number: ");
    scanf("%d", &column);

    int matrix[row][column];

    printf("Enter the matrix value:\n");
    for(i = 0; i < row; i++)
        for(j = 0; j < column; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++)
            sum += matrix[i][j];

        printf("Sum of the %d row is = %d\n", i + 1, sum);
        sum = 0;
    }
    sum = 0;

    for(j = 0; j < column; j++){
        for(i = 0; i < row; i++)
            sum += matrix[i][j];

        printf("Sum of the %d column is = %d\n", j + 1, sum);
        sum = 0;
    }

    return 0;
}
