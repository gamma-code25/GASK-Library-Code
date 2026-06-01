#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 10
#define MAX_NAME_LENGTH 20
#define MAX_ADDRESS_LENGTH 30

void findHighest();
void findLowest();

int main(){
	system("color FD");
	char names[MAX_EMPLOYEES][MAX_NAME_LENGTH];
	char addresses[MAX_EMPLOYEES][MAX_ADDRESS_LENGTH];
	float salaries[MAX_EMPLOYEES];
	int numEmployees;
	
	printf("Enter the number of employees (maximum %d): ", MAX_EMPLOYEES);
	scanf("%d", &numEmployees);
	getchar(); //input buffer
	
	//Input employee details
	for (int i = 0; i < numEmployees; i++){
		printf("Enter name of employee %d: ", i + 1);
		fgets(names[i], MAX_NAME_LENGTH, stdin);
		//remove the newline character from the name
		names[i][strcspn(names[i], "\n")] = '\0';
		
		printf("Enter address of employee %d: ", i + 1);
		fgets(addresses[i], MAX_ADDRESS_LENGTH, stdin);
		//remove the newline character from the address
		addresses[i][strcspn(addresses[i], "\n")] = '\0';
		
		printf("Enter salary of employee %d: ", i + 1);
		scanf("%f", &salaries[i]);
		getchar();//input buffer
	}
	
	
	//Display the entered employee
	printf("\nEmployee details:\n");
	for (int i = 0; i < numEmployees; i++){
		printf("Employee %d:\n", i + 1);
		printf("Name: %s\n", names[i]);
		printf("Address: %s\n", addresses[i]);
		printf("Salary: %.2f\n", salaries[i]);
	}
	
	return 0;
}
