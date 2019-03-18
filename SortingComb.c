#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define RANDOM_MAX 50
#define FAKT 1.2473309

void vectorRandom(int * vector);
void printVector(int * vector);
void sortingComb(int * vector);

int main(void) {
	int vector[SIZE];

	vectorRandom(vector);
	printVector(vector);
	sortingComb(vector);
	printVector(vector);

	return 0;
}

void vectorRandom(int * vector) {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		vector[i] = rand() % RANDOM_MAX;
	}
}

void printVector(int * vector) {
	printf("Vector: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n\n");
}

void sortingComb(int * vector) {
	int numberOfSwap, temp;

	for (int i = SIZE; i > 1; i /= FAKT) {
		for (int j = 0; j + i < SIZE; ++j) {
			if (vector[j] > vector[j + i]) {
				temp = vector[j];
				vector[j] = vector[j + i];
				vector[j + i] = temp;
				numberOfSwap++;
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (vector[j] > vector[j + 1]) {
				temp = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = temp;
			}
		}
	}
}