#include <stdio.h>

main() {
	int a = 5;
	int *ptr;
	ptr = &a;
	printf("address a: %p\n", &ptr);
	printf("value a: %d\n", *ptr);
	printf("value a: %d\n", a);
	
	*ptr = 20;
	printf("address a: %p\n", &ptr);
	printf("value a: %d\n", *ptr);
	printf("value a: %d\n", a);
	
	getch();
}
