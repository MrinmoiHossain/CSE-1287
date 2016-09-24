#include <stdio.h>

void display();

struct cse1287
{
    int num1;
    float num2;
    char c;
}structVar[5];

int main(void)
{
    int i, arr1[5]= {1, 2, 3, 4, 5};
    float arr2[5] = {1.5, 2.5, 3.5, 4.5, 5.5};

    for(i = 0; i < 5; i++){
        structVar[i].num1 = arr2[i] - arr1[i];
        structVar[i].num2 = arr2[i];
        structVar[i].c = 'A' + i;
    }
    display();

    return 0;
}

void display()
{
    int j, sum = 0;

    for(j = 0; j < 5; j++)
        sum += structVar[j].num1;

    printf("\nSum = %d", sum);
    printf("\nNum2 = %f", structVar[j - 1].num2);
    printf("\nC = %c", structVar[j - 1].c);
}
