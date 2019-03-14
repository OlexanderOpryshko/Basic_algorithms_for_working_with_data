#include <stdio.h> 

long long int findingTheFactorialRecursively(long long int number);

int main (void) {
	long long int number;
	printf("Enter the number of factorial number: ");
	scanf("%lld", &number);

	long long int factorial = findingTheFactorialRecursively(number);

	printf("Factorial: %lld;", factorial);

	return 0;
}

long long int findingTheFactorialRecursively(long long int number) {
	long long int factorial = 1;

	if (number != 1) { 
		factorial = findingTheFactorialRecursively(number - 1);
	}

	return factorial *= number; 
}