/** latihan
Ask student to key in number of subjects 
Ask student name, subject name and mark for each subject
Calculate the average marks
Decide grade for the average marks **/

#include<stdio.h>
#include<string.h>

//Function to calculate the grade based on marks
char calculateGrade(float averageMarks){
//^func is grade A B C .. so use char 
	if (averageMarks >= 90){
		return 'A';
	}
	else if (averageMarks >= 80){
		return 'B';
	}
	else if (averageMarks >= 70){
		return 'C';
	}
	else if(averageMarks >= 60){
		return 'D';
	}
	else if(averageMarks >= 50){
		return 'E';
	}
	else {
		return 'F';	
	}
}

int main(){
	int numSubjects;
	char subjectName[100],name[100];
	float totalMarks;
	
	//Input number of subjects
	printf("Enter number of subjects: ");
	scanf("%d", &numSubjects);
	
	//Input student's name
	printf("Enter student's name: ");
	scanf("%s", name);
	/**fgets(name, sizeof(name), stdin);
	if (name[strlen(name)-1] == '\n')
	{
		name[strlen(name)-1] = '\0';
	}**/
	
	for(int i = 0; i < numSubjects; i++){
		printf("Enter the subject's name: ");
		scanf("%s", subjectName);
		
		int marks;
		printf("Enter the marks for %s: ",subjectName);
		scanf("%d", &marks);
		totalMarks += marks;
	}
	
	//calculate average mark
	float averageMarks = totalMarks / numSubjects;
	
	printf("Average marks: %.2f\n", averageMarks);
	
	//call calculateGrade function to determine the grade for the average marks
	char grade = calculateGrade(averageMarks);
	
	//output the grade
	printf("The grade for %s based on the Average marks : %c", name, grade);
	
	return 0;
}

