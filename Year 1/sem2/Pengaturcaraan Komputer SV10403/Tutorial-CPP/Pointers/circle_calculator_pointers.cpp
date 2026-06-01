#include <stdio.h>

#define PI 3.14159

void calculateCircle(float radius, float *area, float *circumference);

int main(){
	float radius, area, circumference;
	
	//Input the radius of the circle
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	
	//call the function to calculate area and circumference
	calculateCircle(radius, &area, &circumference);
	
	//Display results
	printf("Area of the circle: %.2f\n", area);
	printf("Circumference of the circle: %.2f\n", circumference);
	
	return 0;
}

//function definition to calculate the area and circumference of a circle
void calculateCircle(float radius, float *area, float *circumference){
	//calculate area and circumference
    *area = PI * radius * radius;
    *circumference = 2 * PI * radius;
}

