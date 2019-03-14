#include <stdio.h>

int main (void) {
	long long int number, factorial = 1;

	printf("Enter number: ");
	scanf("%lld", &number);

	for (int i = 1; i <= number; i++) {
		factorial *= i;
	}

	printf("Factorial: %lld", factorial);

	return 0;
}