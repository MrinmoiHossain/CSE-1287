#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    int i, count = 0;

    gets(name);

    /* Length count without library function */

    for(i = 0; name[i]; i++)
        count++;

    printf("The length of string is: %d\n", count);

    /* Use library function */
    printf("The length of string is: %d(Use lib-file)\n", strlen(name));

    return 0;
}
