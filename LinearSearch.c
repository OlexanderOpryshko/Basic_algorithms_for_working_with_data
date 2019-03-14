#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define ArraySize 50
#define MaxRandom 100

void ArrayRandom(int * array);
void PrintArray(int * array);
void InsertionSort(int * array);
void LinearSearch(int * array, int number);

int main(void){
	int array[ArraySize];

	ArrayRandom(array);
	PrintArray(array);
	InsertionSort(array);
	PrintArray(array);

	int number;
	printf("Enter the number you are looking for: ");
	scanf("%d", &number);
	LinearSearch(array, number);

	return 0;
}

void ArrayRandom(int * array) {
	srand(time(NULL));
	for (int i = 0; i < ArraySize; i++) {
		array[i] = rand() % MaxRandom; 
	}
}
void PrintArray(int * array) {
	for (int i = 0; i < ArraySize; i++)
		printf("%d ", array[i]);
	printf("\n\n");
}
void InsertionSort(int * array) {
	int number;
	for (int i = 1; i < ArraySize; i++) {
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
void LinearSearch(int * array, int number) {
	int index;
	for (int i = 0; i < ArraySize; i++) {
		if (array[i] == number) {
			index = i;
			break;
		}
	}
	printf("Index of first it number: %d", index);
}