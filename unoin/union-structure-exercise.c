#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Store { // 60
	float price; // 4
	union { // 56
		struct { // 56
			char title[30]; // 32
			char author[20]; // 20
			int numberPage; // 4
		};
		struct { // 16
			char color[10]; // 12
			int size; // 4
		};
	};
};

main() {
	struct Store book;
	struct Store shirt;
	strcpy(book.title, "C Programming");
	strcpy(book.author, "Sok San");
	book.numberPage = 240;
	book.price = 12.50;
	printf("------- Size of book: %d -----------\n", sizeof(book));
	printf("------------ Book Info -------------\n");
	printf("Book Title: %s\n", book.title);
	printf("Author: %s\n", book.author);
	printf("Number of page: %d\n", book.numberPage);
	printf("Price: %.2f\n", book.price);
	
	strcpy(shirt.color, "Red");
	shirt.size = 40;
	shirt.price = 15.25;
	printf("\n-------Size of shirt: %d-----------\n", sizeof(shirt));
	printf("Shirt: %s\n", shirt.color);
	printf("Size: %d\n", shirt.size);
	printf("Price: %.2f\n", shirt.price);
	
	getch();
}
