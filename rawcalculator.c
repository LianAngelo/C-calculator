#include <stdio.h>
#include <math.h>

int main () {
	
	float calcu1, calcu2;
	int choice = 0;
	
	while (choice != 6) {
	
	printf ("\nCALCULATOR");
	printf ("\n1. Addition");
	printf ("\n2. Subtraction");
	printf ("\n3. Multiplication");
	printf ("\n4. Division");
	printf ("\n5. Modulo");
	printf ("\n6 Exit");
	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	
	if (choice == 6) {
		printf ("\nCalculator closed");
		break;
	}
	
	
	
	printf ("\nEnter the calcu1: ");
	scanf("%f", &calcu1); 
	
	printf ("Enter the calcu2: ");
	scanf("%f", &calcu2);
	
	
	
	switch (choice) {
		
		case  1:
			printf ("Result = %.2f", calcu1 + calcu2);
			break;
		case  2:
			printf ("Result = %.2f", calcu1 - calcu2);
			break;
		case  3:
			printf ("Result = %.2f", calcu1 * calcu2);		
			break;
		case  4:
			printf ("Result = %.2f", calcu1 / calcu2);
			break;
		case 5:
			printf ("Result = %.2f", fmod(calcu1, calcu2));
			break;
		default:
			printf ("Invalid operator");	
			
	}
}
	printf ("\n\nDo you want to calculate again? ");
	printf ("\nEnter 1 if YES and Enter 0 if NO: ");
	scanf("%d", &choice); 
	
	return 0;
}