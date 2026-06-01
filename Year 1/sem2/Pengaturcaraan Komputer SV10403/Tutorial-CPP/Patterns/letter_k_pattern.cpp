#include <stdio.h>

int main(){
	int i, j;
	int rows = 10;
	
	for(i = 0; i < rows; i++){
		for(j = 0; j <= rows; j++){
			if((j == 0 || j == rows - 1) || 
			(i == j && j <= rows / 2) || 
			(i + j == rows - 1 && j >= rows/2))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
