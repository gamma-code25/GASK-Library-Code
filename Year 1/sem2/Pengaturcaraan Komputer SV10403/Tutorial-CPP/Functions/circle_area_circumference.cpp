#include <stdio.h>

float calculateArea(float radius);
float calculateCircumference(float radius);

int main()
{
	float radius;
	
	printf("Enter radius of a circle: ");
	scanf("%f", &radius);
	
	printf("Area of the circle: %.2f\n", calculateArea(radius));
	
	printf("Circumference of the circle : %.2f\n", calculateCircumference(radius));	

return 0;	
}

float calculateArea(float radius)
{
	return 3.14159 * radius * radius;
}
float calculateCircumference(float radius)
{
	return 2 * 3.14159 * radius;
}


