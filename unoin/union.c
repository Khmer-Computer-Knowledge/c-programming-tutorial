#include <stdio.h>
#include <conio.h>
#include <string.h>

union Student {
	int id;
	char name[21];
	float cpro;
	float cpp;
	float java;
	float total;
	float average;
};

main() {
	union Student stu;
	stu.cpro = 78.5;
	printf("size of struct: %d\n", sizeof(stu));
	printf("Student cpro: %.2f\n", stu.cpro);
	printf("Student cpp: %.2f\n", stu.cpp);
	printf("Student java: %.2f\n", stu.java);
	printf("Student total: %.2f\n", stu.total);
	printf("Student average: %.2f\n", stu.average);
	getch();
}
