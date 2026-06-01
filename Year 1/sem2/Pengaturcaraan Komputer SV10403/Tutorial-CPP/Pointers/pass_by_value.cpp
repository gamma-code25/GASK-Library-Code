#include <stdio.h>

void modifyValue (int x);

int main(){
	int num = 5;
	
	printf("Before calling modifyValue: %d\n", num);
	
	//calling the function
	modifyValue(num);
	
	printf("After calling modifyValue: %d\n", num);
		
	return 0;
}

//function definition
void modifyValue(int x){
	//modifying the parameter
	x = 10;
	printf("Inside modifyValue: %d\n", x);
}
