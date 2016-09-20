#include <stdio.h>

void myFunction(void);
char name[20];
double time;

int main(void)
{
	printf("Enter your name: ");
	gets(name);
	printf("Enter the present time: ");
	scanf("%lf", &time);

	myFunction();

	return 0;
}

void myFunction(void)
{
	if(time >= 8.00 && time <= 12.00)
		printf("Good Morning %s\n", name);
	else if(time >= 17.00 && time <= 23.00)
		printf("Good Evening %s\n", name);
	else
		printf("You entered wrong time %s\n", name);
}