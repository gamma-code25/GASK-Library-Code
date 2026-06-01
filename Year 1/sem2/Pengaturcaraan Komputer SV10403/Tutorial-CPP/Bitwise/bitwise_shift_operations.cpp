#include <stdio.h>

// func for left shift
int left_shift(int num, int n) {
	return num << n;
}

//func for logical right shift
int right_shift_logical(int num, int n) {
	return num >> n;
}

// func for arithmetic right shift
int right_shift_arithmetic(int num, int n) {
	return(unsigned int)num >> n;
}


int main() {
	int num = 10; //Decimal 10 (binary: 1010)
	int shift_amount = 2;
	
	int left_shifted = left_shift(num, shift_amount);
	printf("Left shift by %d: %d (binary: %b)\n", shift_amount, left_shifted, left_shifted);
	
	//repeat for right shift
	int right_shifted_logical = right_shift_logical(num, shift_amount);
	printf("Logical right shift by %d: %d (binary: %b)\n", shift_amount, right_shifted_logical, right_shifted_logical);

	int right_shifted_arithmetic = right_shift_arithmetic(num, shift_amount);
	printf("Arithmetic right shift by %d: %d (binary: %b)\n", shift_amount, right_shifted_arithmetic, right_shifted_arithmetic);	
	
	
	return 0;
}

