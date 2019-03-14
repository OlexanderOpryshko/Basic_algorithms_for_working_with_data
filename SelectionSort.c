#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000
#define MAX_NUMBER 1000

void ArrayRandom(int * array);
void PrintArray(int * array);
void SelectionSort(int * array);

int main (void) {
	int array[SIZE];

	ArrayRandom(array); 
	PrintArray(array);
	getchar();
	SelectionSort(array);
	PrintArray(array);

	return 0;
}

void ArrayRandom(int * array) {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % MAX_NUMBER;
	}
}

void PrintArray(int * array) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");
}

void SelectionSort (int * array) {
	int arrayMin;
	for (int i = 0; i < SIZE; i++) {
		arrayMin = array[i];
		for (int j = 0; j < SIZE; j++) {
			if (array[j] > arrayMin) {
				arrayMin = array[j];
				array[i] += array[j];
				array[j] = array[i] - array[j];
				array[i] -= array[j];
			}
		}
	}
}