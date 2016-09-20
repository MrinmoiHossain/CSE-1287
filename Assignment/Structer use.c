#include <stdio.h>

struct intChar{
	int x;
	char y;
};

struct intChar varName;

int main(void)
{
	printf("Enter a number: ");
	scanf("%d", &varName.x);
	getchar();
	printf("Enter a character: ");
	scanf("%c", &varName.y);

	printf("The entered number is: %d and character is: %c\n", varName.x, varName.y);

	return 0;
}
