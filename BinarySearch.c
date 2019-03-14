#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void vectorRandom(int * array, int size, int random);
void selectionSort(int * array, int size);
void binarySearch(int * array, int size, int findingNumber);
void showVector(int * array, int size);

int main (void) {
	int size = 100;
	int random = 50;

	int array[100];

	vectorRandom(array, size, random);
	showVector(array, size);
	printf("Fill array random numbers...\n");
	selectionSort(array, size);
	showVector(array, size);

	int findingNumber;

	printf("Enter finding number: ");
	scanf("%d", &findingNumber);

	binarySearch(array, size, findingNumber);

	return 0;
}

void vectorRandom(int * array, int size, int random) {
	srand (time(NULL));
	for (int i = 0; i < size; ++i) {
		array[i] = rand() % random;
	}
}	

void showVector(int * array, int size) {
	printf("Vector: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");
}

void selectionSort(int *array, int size) {
	int arrayMin;
	for (int i = 0; i < size; i++) {
		arrayMin = array[i];
		for (int j = 0; j < size; j++) {
			if (array[j] > arrayMin) {
				arrayMin = array[j];
				array[i] += array[j];
				array[j] = array[i] - array[j];
				array[i] -= array[j];
			}
		}
	}
}

void binarySearch(int * array, int size, int findingNumber) {
	int upperLimit = size - 1;
	int lowerLimit = 0;
	int middle = (upperLimit + lowerLimit) / 2;

	while(array[middle] != findingNumber) {
		printf(".");
		if (array[middle] > findingNumber)
			upperLimit = middle;
		else if (array[middle] < findingNumber)
			lowerLimit = middle;

		middle = (upperLimit + lowerLimit) / 2;
	}

	printf("\nIndex number what you looking for: %d", middle);
}