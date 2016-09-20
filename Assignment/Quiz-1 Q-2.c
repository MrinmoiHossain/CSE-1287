#include <stdio.h>

int main(void)
{
    int i=13, j=9;

    if((i/13) && (j%3))
        printf("The value of j is %d.", j);
    else
        if((i/14) == (j%3))
            printf("The value of i is %d.", i);
        else
            printf("Nothing to do.");

    return 0;
}
