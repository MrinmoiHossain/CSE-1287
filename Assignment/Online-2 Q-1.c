#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];

    gets(word);

    int i, j = 0;

    for(i = 0; i < strlen(word); i++)
        if(word[i] == 'A' || word[i] == 'a' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U')
            printf("%d. %c\n", ++j, word[i]);

    return 0;
}
