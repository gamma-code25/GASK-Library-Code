//calculate area of rectangle
//user input for length and width
//if length = width, display "this is a square"

#include <stdio.h>

//function prototype
float calculateArea(float length, float width);

int main()
{
	float length, width;
	
	printf("Enter length of rectangle: ");
	scanf("%f", &length);
	
	printf("Enter width of rectangle: ");
	scanf("%f", &width);
	
	printf("Area of rentangle: %.2f\n", calculateArea(length, width));
	
	if (length == width)
	{
		printf("This is a square.\n");
	}
	return 0;
}

//function definition
float calculateArea(float length, float width)
{
	return length * width;
}
