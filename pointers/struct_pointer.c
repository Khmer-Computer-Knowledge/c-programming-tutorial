#include <stdio.h>

typedef struct Student {
	int id;
	char name[20];
	char gender;
	int age;
} Student;

main() {
	Student stu1, *stuPtr;
	stuPtr = &stu1;
	
	printf("Enter id: ");
//	scanf("%d", &stu1.id);
	scanf("%d", &stuPtr->id);
	fflush(stdin);
	printf("Enter name: ");
	scanf("%[^\n]", &stuPtr->name);
	fflush(stdin);
	printf("Enter gender: ");
	scanf("%c", &stuPtr->gender);
	printf("Enter age: ");
	scanf("%d", &stuPtr->age);
	
	printf("\n---------- Student Info -------------\n");
//	printf("Student id: %d\n", stu1.id);
//	printf("Student id: %d\n", stuPtr->id);
	printf("Student id: %d\n", (*stuPtr).id);
	printf("Student name: %s\n", stuPtr->name);
	printf("Student gender: %c\n", stu1.gender);
	printf("Student age: %d\n", (*stuPtr).age);
	
	getch();
}

