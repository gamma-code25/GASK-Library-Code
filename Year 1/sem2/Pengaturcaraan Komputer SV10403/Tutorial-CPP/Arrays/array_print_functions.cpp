#include <stdio.h>

//function to print the elements of an integer array
void printArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//function to print the elements of a character array
void printStr(char str[],int size){
	for(int j = 0; j < size; j++){
		printf("%c ", str[j]);
	}
	printf("\n");
}

int main(){
	int numbers[] = {10, 20, 30, 40, 50};
	char nama[] = {'A','B','C'}; //Array initialization
	
	//calling the printArray fucntion and passing the array and its size
	printArray(numbers, 5);// passing the size of numbers array
	printStr(nama, 3); // passing the size of nama array
		
	return 0;
}
