#include <stdio.h>

int main(){
	int rows, cols, i, j;
	
	//input the dimensions of the shape
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &cols);
	
	//display the shape using nested loops
	for (i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
