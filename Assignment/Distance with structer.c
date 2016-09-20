#include <stdio.h>

struct intChar{
	float disInKm, disInM;
}range;

int main(void)
{
	printf("Enter a distance in km: ");
	scanf("%f", &range.disInKm);
	printf("Enter a distance in meter: ");
	scanf("%f", &range.disInM);

	printf("The total distance is: %0.2f\n", 1000 * range.disInKm + range.disInM);

	return 0;
}
