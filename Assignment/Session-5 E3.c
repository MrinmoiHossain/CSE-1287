#include <stdio.h>

int main(void)
{
    int i;

    printf("The characters of ASCII code 45 to 64:\n");
    for(i = 45; i <= 64; i++)
        printf("The ASCII code: %d\tThe character: %c\n", i, i);


    return 0;
}
