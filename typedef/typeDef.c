#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef unsigned char byte;
typedef char sbyte;
struct Student {
	int id;
	char name[20];
	char gender;
	char age;
};
typedef struct Student Student;

main() {
	byte a = 20;
	sbyte b = 25;
	Student stu;
	stu.id = 1010;
	strcpy(stu.name, "Student A");
	stu.gender = 'M';
	stu.age = 27;
	printf("value of a: %d\n", a);
	printf("value of b: %d\n", b);
	printf("value of a + b: %d\n", (a+b));
	getch();
}
