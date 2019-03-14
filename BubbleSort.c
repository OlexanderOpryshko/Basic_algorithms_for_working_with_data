#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void ArrayRandom(int * array);
void PrintArray(int * array);
void BubbleSort(int * array);

int main(void) {
	int array[SIZE];

	ArrayRandom(array);
	PrintArray(array);
	BubbleSort(array);
	PrintArray(array);

	return 0;
}

void ArrayRandom(int * array) {
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 100;
	}
}

void PrintArray(int * array) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");
}
void BubbleSort(int * array) {
	for (int j = 0; j < SIZE; j++){
		for (int i = 0; i < SIZE; i++) {
			if (array[i] > array[i + 1]) {
				array[i] += array[i + 1];
				array[i + 1] = array[i] - array[i + 1];
				array[i] -= array[i + 1]; 
			}
		}
	}
}