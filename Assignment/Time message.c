#include <stdio.h>

void myFunction(char name[], double time);

int main(void)
{
	double setTime;
	char myName[20];

	printf("Enter your name: ");
	gets(myName);
	printf("Enter the present time: ");
	scanf("%lf", &setTime);

	myFunction(myName, setTime);
	return 0;
}

void myFunction(char name[], double time)
{
	if(time >= 8.00 && time <= 12.00)
		printf("Good Morning %s\n", name);
	else if(time >= 17.00 && time <= 23.00)
		printf("Good Evening %s\n", name);
	else
		printf("You entered wrong time %s\n", name);
}
