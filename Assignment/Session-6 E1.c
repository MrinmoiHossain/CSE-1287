#include <stdio.h>

int main(void)
{
    int a, b;
    char ch;

    printf("What do you want: ");
    printf("Add or Subtract or Multiply or Divide?\n");

    do{
        printf("Enter first letter: ");
        ch = getchar();
    }while(ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');
    printf("\n");

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(ch)
    {
        case 'A':
            printf("The result: %d\n", a + b);
            break;
        case 'S':
            printf("The result: %d\n", a - b);
            break;
        case 'M':
            printf("The result: %d\n", a * b);
        case 'D':
            if(b != 0)
                printf("The result: %d\n", a / b);
    }

    return 0;
}
