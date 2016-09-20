#include <stdio.h>

int main(void)
{
    int i, j = 5;

    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", j, i, i * j);

    return 0;
}
