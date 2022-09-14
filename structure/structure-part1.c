#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct Student {
	int id;
	char name[30];
	float cPro;
	float cpp;
	float java;
	float total;
	float average;
} Student;

main() {
	Student stu;
	stu.id = 1;
	strcpy(stu.name, "Student1");
	stu.cPro = 78;
	stu.cpp = 89;
	stu.java = 90;
	stu.total = stu.cPro + stu.cpp + stu.java;
	stu.average = stu.total/3.0;
	
	printf("Student Id: %d\n", stu.id);
	printf("Student Name: %s\n", stu.name);
	printf("C Pro: %.2f\n", stu.cPro);
	printf("C++: %.2f\n", stu.cpp);
	printf("Java: %.2f\n", stu.java);
	printf("Total: %.2f\n", stu.total);
	printf("Average: %.2f\n", stu.average);
	
	getch();
}
