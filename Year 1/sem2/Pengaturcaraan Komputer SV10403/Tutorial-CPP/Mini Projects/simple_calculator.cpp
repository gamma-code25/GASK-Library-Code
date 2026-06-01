#include <stdio.h>

int main() {
	float num1, num2;
	char operation;
	
	//ask the user to input two numbers
	printf("Enter first number:  ");
	scanf("%f", &num1);
	printf("Enter second number:  ");
	scanf("%f", &num2);
	
	printf("Choose an operation(+, -, *, /): ");
	scanf(" %c", &operation); //note the space before %c to consume any whitespace characters
	
	//perform the selected operation and display the result
	switch(operation){
		case '+':
			printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
			break;
		case '/':
			if (num2 !=0){
			printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
		} else {
			printf("Error! Division by zero is not allowed.\n");
		}
		break;
	
	
	}

	return 0;
}

