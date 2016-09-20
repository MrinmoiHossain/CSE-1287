#include <stdio.h>

int main(void)
{
    char str[30];
    int i, count = 0;

    gets(str);

    for(i = 0; str[i]; i++)
        count++;

    printf("The length of the string is: %d\n", count);

    return 0;
}
