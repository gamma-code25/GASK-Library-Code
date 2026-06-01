#include <stdio.h>

int main() {
    int rows = 8; 
    
    for (int i = 0; i < rows; i++) {
       
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < rows - i; k++) {
            if (k != rows - i - 3) { 
                printf("# ");
            } else {
                printf("#"); 
			}
        }
        printf("\n");
    }
    
    return 0;
}
