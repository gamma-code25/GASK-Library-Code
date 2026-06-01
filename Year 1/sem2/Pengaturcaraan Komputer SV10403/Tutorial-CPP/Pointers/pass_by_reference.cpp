#include <stdio.h>

//function prototype
void modifyValue (int *x);

int main(){
	int num = 5;
	
	printf("Before calling modifyValue: %d\n", num);
	
	//calling the function, passing the address of num
	modifyValue(&num);
	
	printf("After calling modifyValue: %d\n", num);
		
	return 0;
}

//function definition
void modifyValue(int *x){
	//modifying the value at the address pointed to by x
	*x = 10;
	printf("Inside modifyValue: %d\n", *x);
}
