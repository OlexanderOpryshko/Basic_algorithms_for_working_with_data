#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define MAX_RANDOM 50

void vectorRandom(int * vector);
void printVector(int * vector);
void shellSort(int * vector);

int main(void) 
{
	int vector[SIZE];

	vectorRandom(vector);
	printVector(vector);
	shellSort(vector);
	printVector(vector);

	return 0;
}

void vectorRandom(int * vector) {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) vector[i] = rand() % MAX_RANDOM;
}

void printVector(int * vector) {
	printf("Vector: ");

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", vector[i]);
	}

	printf("\n\n");
}

void shellSort(int * vector) {
	int temp, i, j, k;

	for (i = SIZE / 2; i > 0; i /= 2) {
		for (j = i; j < SIZE; j++) {
			temp = vector[j];
			for (k = j; k >= i; k -= i) {
				if (temp < vector[k - i])
					vector[k] = vector[k - i];
				else break;
			}
			vector[k] = temp;
		}
	}
}