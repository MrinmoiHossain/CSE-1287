#include <stdio.h>

int main(void)
{
    int i, id[5];
    char name[5][20];

    for(i = 0; i < 5; i++){
        scanf("%d", &id[i]);
        gets(name[i]);
    }

    printf("\n");
    for(i = 0; i < 5; i++)
        printf("ID: %d\t%s\n", id[i], name[i]);

    return 0;
}
