#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_DISCHARGES 8

bool cardVerification(long long int number);

int main(void)
{
	long long int number;
	printf("Number: ");
	scanf("%lld", &number);

	bool rightCard = cardVerification(number);

	if (rightCard == true)
		printf("\nVISA\n");
	else 
		printf("\nINVALID\n");

	getchar();
	getchar();

	return 0;
}

bool cardVerification(long long int number)
{
	int discharges[NUMBER_OF_DISCHARGES];
	int lastDischarges[NUMBER_OF_DISCHARGES];

	for (int i = 0; i < NUMBER_OF_DISCHARGES; i++) {
		lastDischarges[i] = number % 10;
		number = number / 10;
		discharges[i] = number % 10;
		discharges[i] *= 2;
		number = number / 10;	
	}

	int sum = 0;

	for (int i = 0; i < NUMBER_OF_DISCHARGES; i++) {
		if (discharges[i] > 9) {
			sum += discharges[i] % 10;
			discharges[i] /= 10;
			sum += discharges[i];
		}
		else {
			sum += discharges[i];
		}
	}

	for (int i = 0; i < NUMBER_OF_DISCHARGES; i++) {
		sum += lastDischarges[i];
	}
	
	if ((sum % 10) == 0)
		return true;
	else
		return false;
}