#include <stdio.h>

int main(){
	
	int num = 10;
	int *ptr; 
	
	ptr = &num; //assign the address num to ptr
	
	//Output the value of num using pointer
	printf("Value of num: %d\n", num);
	printf("Value of num: %d\n", *ptr);
	
	//Output the address of num
	printf("Address of num: %p\n", ptr);
	printf("Address of num: %p\n", &num);
	
	return 0;
}
