#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch1[15], ch2[15];
    int com;

    gets(ch1);
    gets(ch2);

    com = strcmp(ch1, ch2);

    if(com < 0)
        printf("First string is less than Second string\n");
    else if(com > 0)
        printf("Second string is less than First string\n");
    else
        printf("Both string is equal\n");

    return 0;
}
