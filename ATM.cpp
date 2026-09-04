#include <stdio.h>

int main () {
	
	int pin;
	int correctPin = 6789;
	int attempts = 0;
	int choice = 0;
	int newPin;
	
	float balance = 5000.00;
	float withdraw;
	float deposit;
	float lastWithdraw = 0;
	float lastDeposit = 0;
	
	
	printf ("\nATM SYSTEM\n");
	
	while (attempts < 3) {
		printf ("\nEnter the PIN: ");
		scanf ("%d", &pin);
		
		if (pin == correctPin) {
			printf ("\nAccess Granted!");
			break;
		}
		else {
			attempts++;
			printf ("\nIncorrect PIN!");
		}
	}
	
	if (attempts == 3) {
		printf ("\nToo many incorrect attempts.");
		return 0;
	}
	
	while (choice != 4) {
	
	
	printf ("\nATM MENU\n");
	printf ("1. Check Balance\n");
	printf ("2. Withdraw Money\n");
	printf ("3. Deposit Money\n");
	printf ("4. Change PIN\n");
	printf ("5: Exit\n");
	printf ("6./");
	
	printf ("\nEnter your choice: ");
	scanf("%d", &choice);
	if (choice == 1) {
		printf ("\nYour Balance: $%.2f\n", balance);
	}
	else if (choice == 2) {
		printf ("\nEnter the amount to withdraw: $");
		scanf("%f", &withdraw);
		
		if (withdraw <= balance) {
			balance = balance - withdraw;
			
			lastWithdraw = withdraw;
			
			printf("\nWithdrawal succesfull\n");
			
			printf ("\n-----TRANSACTION-----\n");
			printf ("Withdrawal: $%.2f\n", withdraw);
			printf("Remaning Balance: $%.2f\n", balance);
		}
		else {
			printf ("\nInsufficient balance!\n");
		}
		
	} 
	else if (choice == 3) {
		printf ("\nEnter the amount to deposit: $");
		scanf("%f", &deposit);
		
		balance = balance + deposit;
		
		lastDeposit = deposit;
		
		printf ("\nDeposit successfull\n");
		printf ("\nNew Balance: $%.2f\n", balance);
	}
	
	
	
	else if (choice == 5) {
		
		
		printf ("\nEnter your new PIN: ");
		scanf("%d", &newPin);
		
		correctPin = newPin;
		
		printf("\nPIN changed succesfullt!\n");
	}
	else if (choice == 6) {
		printf ("\nThank you for using the ATM!\n");
	}

	
}
	return 0;
}