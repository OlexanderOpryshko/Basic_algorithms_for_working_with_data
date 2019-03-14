#include <stdio.h>
#include <string.h>

int main(void) {
	char string[] = "Hallo, world. My name is Jared.";

	size_t size = sizeof(string) / sizeof(string[0]);

	printf("%s ", string);
	printf("\n\n");

	for (int i = 0; i < size / 2; i++) {
		char character = string[i];
		string[i] = string[size - i - 1];
		string[size - i - 1] = character;
	}

	for (int i = 0; i < size; i++) {
		printf("%c ", string[i]);
	}

	printf("\n\n");

	return 0;
}