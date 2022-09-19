#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Student {
	int id;
	struct {
		char name[20];
		int age;
		int a;
	};
	union {
		float cpro;
		float cpp;
	};
};

main() {
	struct Student stu;
	stu.id = 10;
	stu.age = 25;
	strcpy(stu.name, "Student One");
	stu.cpp = 56.0;
	printf("------------ Student Info ------------\n");
	printf("Student name: %s\n", stu.name);
	printf("Student id: %d\n", stu.id);
	printf("Student a: %d\n", stu.a);
	printf("Student age: %d\n", stu.age);
	printf("Student cpp: %.2f\n", stu.cpp);
	printf("Student cpro: %.2f\n", stu.cpro);
	getch();
}
