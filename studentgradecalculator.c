#include <stdio.h>

int main () {
	
	
	char name[100];
	float English, Science, Math;
	float average;
	char again;
	int pin;
	int correctPin = 54321;
	int attempts = 0;
		
	
	printf ("\nENTER THE PASS\n");
	
	while (attempts < 3) {
		printf("\nEnter the PIN: ");
		scanf("%d", &pin);
		
		if (pin == correctPin) {
			printf("\nAccess Granted");
			break;
		}
		else {
			attempts++;
			printf ("\nIncorrect PIN!\n");
		}
	}
	
	if (attempts == 3) {
		printf ("\nToo many incorrect attempts. ");
		return 0;
	}
	do {
	
	printf("\nSTUDENT GRADE CALCULATOR\n");
	
	printf ("\nEnter the student name: ");
	scanf("%s", name);
	
	printf ("Enter English grade: ");
	scanf("%f", &English);
	
	printf ("Enter Science grade: ");
	scanf("%f", &Science);
	
	printf ("Enter Math grade: ");
	scanf("%f", &Math);
	
	
	average = (English + Science + Math) / 3;
	
	printf ("\nSTUDENT RESULT GRADE\n");
	printf ("Name: %s\n", name);
	printf ("Average: %.2f\n", average);
	
	if (average >= 75) {
		printf ("RESULT: PASSED\n");
	} else {
		printf ("RESULT: FAILED\n");
	}
	
	printf ("\nCalculate another student? (Y/N): ");
	scanf(" %c", &again);
	
	attempts = 0;
	
	} while (again == 'Y' || again == 'y');
	return 0;
}