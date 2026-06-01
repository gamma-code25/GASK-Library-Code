#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int* ptr;
	int n, i;
	
	//Get the number of elements of the array
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Entered number of elements: %d\n", n);
	
	ptr = (int*)malloc(n * sizeof(int));
	
	if(ptr == NULL) {
		printf("failed memory allocation.\n");
	}	
	else {
		printf("Memory successfully allocated.\n");
		
		//get the elements of the array
		for(i = 0; i < n; ++i){
			
			ptr[i] = i + 1;
		}
		
		//print the elements of the array
		for(i = 0; i < n; ++i){
			
			printf("%d, ", ptr[i]);
		}
	}
	
	//free(ptr); 
	
	return 0;
}
