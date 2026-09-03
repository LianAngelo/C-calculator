#include <stdio.h>

int main () {
	
	
	char name[100];
	float English, Science, Math;
	float average;
	
	printf("\nSTUDENT GRADE CALCULATOR\n");
	
	printf ("\nEnter the student name: ");
	scanf("%s", &name);
	
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
	
	return 0;
}