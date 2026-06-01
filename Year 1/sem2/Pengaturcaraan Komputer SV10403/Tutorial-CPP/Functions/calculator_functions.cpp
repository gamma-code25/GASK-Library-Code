#include <stdio.h>

void add(float num1, float num2);
void substract(float num1, float num2);
void multiply(float num1, float num2);
void divide(float num1, float num2);

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
			add(num1, num2);
			break;
		case '-':
			substract(num1, num2);
			break;
		case '*':
			multiply(num1, num2);
			break;
		case '/':
			divide(num1, num2);
			break;
		default:
			printf("Error! Division by zero is not allowed.\n");

		break;
	
	
	}

	return 0;
}

