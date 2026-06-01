#include <stdio.h>

int main(){
	int number;
	int sum =0;
	
	//promt the user for the first number
	printf("Enter a number (-1 to end):");
	scanf("%d", &number);
	
	//Continue looping untul the sentinel value (-1) is entered
	while (number != -1){
		//add the current number to the su,
		sum += number;
		
		//prompt the user for the next number
		printf("Enter a number (-1 to end):");
		scanf("%d", &number);		
		
		
	}

	return 0;
}
