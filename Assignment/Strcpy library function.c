#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Mrinmoi", nameCopy[10];

    strcpy(nameCopy, name);
    //strcpy(to, from)

    puts(nameCopy);

    return 0;
}
