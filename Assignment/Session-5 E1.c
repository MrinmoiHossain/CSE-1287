#include <stdio.h>

int main(void)
{
    int n;
    char ch;

    printf("How many time you want to repeat: ");
    scanf("%d", &n);
    getchar();

    while(n--){
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
        getchar();
    }

    return 0;
}
