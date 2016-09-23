#include <stdio.h>

int main(void)
{
    FILE *fp;
    char c;

    fp = fopen("text.txt", "w");

    if(fp != NULL){
        printf("Enter text-press and enter to end: ");
        while((c = getchar()) != '*')
            fputc(c, fp);

        fclose(fp);
    }

    fp = fopen("text.txt", "r");

    if(fp != NULL){
        printf("Here your text: ");
        while((c = fgetc(fp)) != EOF)
            printf("%c ", c);

        fclose(fp);
    }

    return 0;
}
