#include<stdio.h>
#include<string.h>

//Function to calculate the grade based on marks
char calculateGrade(int marks){
//^func is grade A B C .. so use char 
	if (marks >= 90){
		return 'A';
	}
	else if (marks >= 80){
		return 'B';
	}
	else if (marks >= 70){
		return 'C';
	}
	else if(marks >= 60){
		return 'D';
	}
	else if(marks >= 50){
		return 'E';
	}
	else {
		return 'F';	
	}
}

int main(){
	char subject[100];
	char name[100];
	int marks;
	
	//Input student's name
	printf("Enter student's name: ");
	fgets(name, sizeof(name), stdin);//for long names
	//scanf("%s", name); //<- normal one input
	if (name[strlen(name)-1] == '\n')
	{
		name[strlen(name)-1] = '\0';
	}
	//what to do to remove trailling newline
	
	//Input student's subject
	printf("Enter student's subject: ");
	fgets(subject, sizeof(subject), stdin);
	//scanf("%s", subject);
	
	//Input marks from user
	printf("Enter the marks : ");
	scanf("%d",&marks);
	
	//call calculateGrade function to determine the grade
	char grade = calculateGrade(marks);
	
	//output the grade
	printf("The grade for %s in %s is : %c\n", name, subject, grade);

	return 0;
}
	
	
	
	

