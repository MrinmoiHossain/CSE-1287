#include <stdio.h>

int main(void)
{
    char ch[100];
    int i;

    gets(ch);

    for(i = 0; ch[i]; i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            ch[i] = 'a' + (ch[i] - 'A');
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            ch[i] = 'A' + (ch[i] - 'a');
        }
    }

    puts(ch);

    return 0;
}
