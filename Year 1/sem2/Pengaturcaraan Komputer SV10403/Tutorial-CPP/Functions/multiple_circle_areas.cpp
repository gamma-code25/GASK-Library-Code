//Circle function

#include<stdio.h>
#define PI 3.14159

//Func to calculate the area of circle
float calculateCircleArea(float radius){
	return PI * radius * radius;
}

//Func to get radius of a circle from the user
float getRadiusFromUser(int circleNumber){
	float radius;
	printf("Enter the radius of circle %d: ", circleNumber);
	scanf("%f", &radius);
	return radius;
}

int main(){
	int numCircles, i;
	float radius, area, totalArea = 0.0;
	
	printf("How many circles do you want to calculate?: ");
	scanf("%d", &numCircles);
	
	for (i = 1; i <= numCircles; i++){
		radius = getRadiusFromUser(i);//Call func to get radius of circle
		area = calculateCircleArea(radius);//Call func to calculate area of circle
		printf("Area of circle %d: %.2f\n", i, area);
		totalArea += area;//To calculate the total area of all the circle
	}  //totalArea += area means >> totalArea = totalArea + area
	
	printf("Total area of all circles: %.2f\n", totalArea);
	
	return 0;
}
