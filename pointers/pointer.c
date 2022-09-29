#include <stdio.h>

main() {
	int age = 20;
	int *ptr = &age;
	printf("your age: %d\n", age);
	printf("*ptr: %p\n", &ptr);
	printf("*ptr: %x\n", &ptr);
	printf("*ptr: %d\n", *ptr);
	getch();
}
