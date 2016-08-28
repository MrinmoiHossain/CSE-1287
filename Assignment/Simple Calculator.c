#include <stdio.h>

int main(void)
{
    int a, b;
    char ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("What do you want\?\n");
    printf("Add or Subtract or Multiple or Divide?\n");
    printf("Enter the first letter : ");
    getchar();
    ch = getchar();

    if(ch == 'A' || ch == 'a')
        printf("The adding value of %d and %d is: %d\n", a, b, a + b);
    else if(ch == 'S' || ch == 's')
        printf("The adding value of %d and %d is: %d\n", a, b, a - b);
    else if(ch == 'M' || ch == 'm')
        printf("The adding value of %d and %d is: %d\n", a, b, a * b);
    else if((ch == 'D' || ch == 'd') && b != 0)
        printf("The adding value of %d and %d is: %d\n", a, b, a / b);

    return 0;
}
