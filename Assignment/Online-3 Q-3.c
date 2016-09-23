#include <stdio.h>

int main(void)
{
    char word[100], name[100];
    int i, j, count = 0, count1 = 0;

    gets(word);
    gets(name);

    for(i = 0; word[i]; i++){
        count++;
    }

    for(j = 0; name[j]; j++){
        count1++;
    }
    if(count > count1)
        printf("First Sentence.\n");
    else if(count < count1)
        printf("Second Sentence.\n");
    else
        printf("Both are same.\n");

    return 0;
}
