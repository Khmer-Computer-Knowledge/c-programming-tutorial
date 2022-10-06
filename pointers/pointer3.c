#include <stdio.h>

main() {
	int a[5], i;
	
	for(i=0; i<5; i++) {
		printf("Enter value to &a[%d] = ", i);
//		scanf("%d", &a[i]);
		scanf("%d", a+i);
//		printf("&a[%d] = %x\n",i, &a[i]);
	}
//	printf("&a = %x\n", a);

	for(i=0; i<5; i++) {
		printf("value of a[%d]: %d\n", i, a[i]);
		printf("&a[%d] = %x\n",i, &a[i]);
	}
	printf("&a = %x\n", a);
	getch();
}

