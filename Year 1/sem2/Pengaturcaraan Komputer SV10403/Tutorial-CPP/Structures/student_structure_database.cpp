#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	char gender; // can use m or f or a different approach
	float cgpa;
	char hometown[50];
};

//function to get student information

void inputStudent(struct Student *student){
	
	printf("Enter student information:\n");
	printf("Enter Name: ");
	fgets(student->name, sizeof(student->name), stdin);
	student->name[strcspn(student->name, "\n")] = '\0'; //remove newline from name
	
	printf("Enter Age: ");
	scanf("%d", &student->age);
	
	printf("Enter Gender (m/f): ");
	scanf(" %c", &student->gender);
	
	printf("CGPA: ");
	scanf("%f", &student->cgpa);
	
	getchar();
	
	printf("Enter Hometown: ");
	fgets(student->hometown,sizeof(student->hometown),stdin);
	student->hometown[strcspn(student->hometown, "\n")] = '\0'; //remove newline
}

void displayStudent(struct Student *student) {
	
	printf("Student Information: \n");
	printf("Name: %s\n", student->name);
	printf("Age: %d\n", student->age);
	printf("Gender: %c\n", student->gender);
	printf("CGPA: %2.f\n", student->cgpa);
	printf("Hometown: %s\n", student->hometown);
}

int main() {
	
	struct Student students[3];
	
	for (int i = 0; i < 3; i++) {
		printf("\nStudent %d:\n", i + 1);
		inputStudent(&students[i]);
	}
	
	for (int i = 0; i < 3; i++){
		printf("\nStudent %d:\n", i + 1);
		displayStudent(&students[i]);
	}
	
	return 0;
}
