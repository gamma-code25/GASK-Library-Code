#include <stdio.h>

int main() {
    int rows = 7; // Number of rows for the pyramid

    // Loop through each row
    for (int i = 0; i < rows; ++i) {
        // Print spaces for indentation
        for (int j = 0; j < rows - i - 1; ++j) {
            printf(" ");
        }

        // Print stars for the pyramid
        for (int k = 0; k < (2 * i + 1); ++k) {
            printf("*");
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
