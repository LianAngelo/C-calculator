#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	int secretNumber = 100;
	int guess = 0;
	int attempts = 0;
	
	srand(time(0));
	secretNumber = rand() % 100 + 1;
	
	
	printf ("-----NUMBER GUESSING GAME------");
	
	while (guess !=secretNumber) {
	
	
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
	printf ("\nYou guessed it in %d attempts!\n", attempts);
	return 0;
}