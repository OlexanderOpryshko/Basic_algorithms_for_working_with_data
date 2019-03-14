#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 20000
#define MAX_NUMBER 10000

void ArrayRandom(int * array);
void PrintArray(int * array);
void InsertionSort(int * array);

int main (void) {
	int array[SIZE];

	ArrayRandom(array);
	PrintArray(array);
	printf("\n\n");
	getchar();
	InsertionSort(array);
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
}
void InsertionSort(int * array) {
	int number;
	for (int i = 1; i < SIZE; i++) {
		number = array[i];
		for (int j = i - 1; j >= 0; j--) {
			if (number < array[j]) { 
				array[j + 1] = array[j];
				array[j] = number;
			}
			else {
				array[j + 1] = number;
				break;
			}
		}
	}
}