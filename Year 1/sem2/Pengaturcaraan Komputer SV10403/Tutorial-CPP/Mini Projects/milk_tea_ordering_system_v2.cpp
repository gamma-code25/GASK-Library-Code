#include <stdio.h>

float total = 0.0; //declare total as a global variable
void displayMenu(){
	printf("Menu:\n");
	printf("1. Original Milk Tea (cost: RM5.00)\n");
	printf("2. Latte (cost: RM8.00)\n");
	printf("3. Cappuccino (cost: RM10.00)\n");
	printf("4. Payment\n");
	printf("5. Exit\n");
	printf("Enter your choice: ");
}

void processChoice(int choice){
	switch (choice){
		case 1:
			printf("You have choose Original Milk Tea\n");
			total += 5.0;
			break;
		case 2:
			printf("You have choose Latte\n");
			total += 8.0;
			break;
		case 3:
			printf("You have choose Cappuccino\n");
			total += 10.0;
			break;
		case 4:
			printf("Total amount due: RM%.2f\n", total);
			float payment;
			printf("Enter yout payment amount: RM");
			scanf("%f", &payment);
			if(payment >= total){
				printf("Thank you for your payment!\n");
				printf("Your change: RM%.2f", payment - total);
				total = 0.0;
			} else {
				printf("Insufficient payment, Please enter the correct amount.\n");
			}
			break;
		case 5:
			printf("Exiting...\n");
			//no code needed for exiting, the loop will terminate
			break;
		default:
			printf("Invalid choice. Please enter a valid option. ^-^!\n");
			break;
	}
}

int main()
{
	int choice = 0;// initialize choice outside the loop
	
	while (choice != 5){ //loop until the user chooses to exit (option 5)
		displayMenu();
		scanf("%d", &choice);
		processChoice(choice);
	}
	
	return 0;
}
