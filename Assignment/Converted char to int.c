#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("You entered :%c\n", ch);

    printf("The ascii value of the character is: %d\n", ch);

    return 0;
}
