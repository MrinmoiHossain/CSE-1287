#include <stdio.h>

struct student{
	char name[50];
	int roll;
	float cgpa;
}std;

int main(void)
{
	printf("Enter the roll number: ");
	scanf("%d", &std.roll);
	getchar();
	printf("Enter the name: ");
	gets(std.name);
	printf("Enter the cgpa: ");
	scanf("%f", &std.cgpa);

	printf("ID: %d   %s   %0.2f\n", std.roll, std.name, std.cgpa);

	return 0;
}
