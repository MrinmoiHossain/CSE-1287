#include <stdio.h>

int main(void)
{
    FILE *fp;
    char c;
    int i;

    fp = fopen("newtext.txt", "w");

    if(fp != NULL){
        for(i = 0; i < 5; i++)
            fprintf(fp, "%c %d", 'A' + i, 'A' + i);

        fclose(fp);
    }

    fp = fopen("newtext.txt", "r");

    if(fp != NULL){
        while((fscanf(fp, "%c %d", &c, &i)) != EOF)
            printf("%c %d\n", c, i);

        fclose(fp);
    }

    return 0;
}
