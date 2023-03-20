#include <stdio.h>
int main() {
	char words[10][256]; // array to store the words

	// loop to receive the words from the user
	for (int i = 0; i < 10; i++) {
		printf("Enter word %d: ", i+1);
		scanf("%s", words[i]);
	}

	// loop to print the first character of each word
	for (int i = 0; i < 10; i++) {
		printf("%c ", words[i][0]);
	}
	printf("\n");

	return 0;
}
