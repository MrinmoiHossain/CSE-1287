#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    ch = getchar();

    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
        if(ch >= 'a' && ch <= 'z')
            printf("A lowercase letter\n");
        else if(ch >= 'A' && ch <= 'Z')
            printf("An uppercase letter\n");
    }
    else if(ch >= '0' && ch <= '9')
            printf("A digit\n");
    else
        printf("I do not know\n");

    return 0;
}
