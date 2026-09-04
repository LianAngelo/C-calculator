#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	
	
	int secretNumber;
	int guess = 0;
	int attempts = 0;
	int difficulty;
	int maxAttempts;
	
	char again;
	
	
	srand(time(0));
	
	do {
	
	printf ("\n----SELECT DIFFICULTY----\n");
	printf ("1. Easy\n");
	printf ("2. Medium\n");
	printf ("3. Hard\n");
	printf ("Enter your choice: ");
	scanf("%d", &difficulty);
	
	if (difficulty == 1) {
		printf("\nEasy Mode: 1-30 | Attempts\n");
	}
	else if (difficulty == 2) {
		printf ("\nMedium Mode: 1-80 | Attempts\n ");
	}
	else if (difficulty == 3) {
		printf ("\nHard Mode: 1-100 | Attempts\n");
	}
	
	if (difficulty == 1) {
		secretNumber = rand() % 30 + 1;
		maxAttempts;
	}
	else if (difficulty == 2) {
		secretNumber = rand() % 80 + 1;
		maxAttempts;
	}
	else if (difficulty == 3) {
		secretNumber = rand() % 100 + 1;
		maxAttempts;
	}
	
	
	printf ("-----NUMBER GUESSING GAME------");
	
	while (guess !=secretNumber && attempts < 10) {
	
	
	printf ("\nEnter the guess number: ");
	scanf("%d", &guess);
	
	attempts++;
	
	if (guess == secretNumber) {
		printf ("\nCorrect! You Guessed the Number\n");
	}
	else if (guess > secretNumber) {
		printf ("\nToo High!\n");
	} 
	else {
		printf ("\nToo Low!\n");
	}
}
	if (guess == secretNumber) {
		printf ("\nYou guessed it in %d attempts!\n", attempts);
	}
	else {
		printf ("\nGame Over! You use all 10 attempts!");
	}
	printf ("\nPlay Again? (Y/N)");
	scanf (" %c", &again);
	
	} while (again == 'y' || again == 'Y');
	return 0;
}