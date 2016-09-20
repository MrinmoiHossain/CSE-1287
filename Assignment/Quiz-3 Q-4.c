#include <stdio.h>

void myFunction(char name[]);

int main(void)
{
	char myName[30];

	printf("Enter your name: ");
	gets(myName);

	myFunction(myName);

	return 0;
}

void myFunction(char name[])
{
	printf("Have a good day, %s!!!\n", name);
}
