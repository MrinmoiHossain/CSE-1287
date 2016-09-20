#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
  char name[30];
  int count = 0, i;

  gets(name);

  for(i = 0; i < strlen(name); i++)
    if(isupper(name[i]))
        count++;

  printf("The total upper case letter is: %d\n", count);

  return 0;
}
