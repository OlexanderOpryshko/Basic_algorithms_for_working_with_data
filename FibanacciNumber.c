#include <stdio.h>

int main (void) {
	int firstNum = 0, secondNum = 1, thirdNum;
	int count;
	printf("Number of Fibanacci number: ");
	scanf("%d", &count);

	printf("Fibanacci number:\n%d %d ", firstNum, secondNum);

	for (int i = 0; i < count; i++) {
		thirdNum = firstNum + secondNum;
		printf("%d ", thirdNum);
		firstNum = secondNum;
		secondNum = thirdNum;
	}

	return 0;
}