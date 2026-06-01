#include <stdio.h>

float calculateTotalPoints(float Point1, float Point2, float Point3);
float calculateAveragePoints(float totalPoint, float numofRound);

int main() { //main function
    //Declare variables as float type
    float Point1,Point2,Point3,totalPoint,AvgPoint;//variable declaration

    //prompt for user to insert the points scored by the player in each of three rounds
    printf("Enter point scored in Round 1: ");
    scanf("%f",&Point1);
    printf("Enter point scored in Round 2: ");
    scanf("%f",&Point2);
    printf("Enter point scored in Round 3: ");
    scanf("%f",&Point3);

    //calling the functions to calculate the total point
    totalPoint=calculateTotalPoints(Point1,Point2,Point3);
    //calling the function to calculate the average point
    AvgPoint=calculateAveragePoints(totalPoint,3);

    //display the total point
    printf("\nThe total point is %.2f",totalPoint);

    //display the average point
    printf("\nThe average point is %.2f\n",AvgPoint);
    return 0;
}

//function declaration
float calculateTotalPoints(float Point1, float Point2, float Point3){
    return Point1+Point2+Point3;
}

float calculateAveragePoints(float totalPoint, float numofRound){
    float avg= (int) totalPoint/numofRound;
    return avg;
}