#include <stdio.h>
#include <conio.h>

struct Student {
	char name[30];
	float cpro;
	float cpp;
	float java;
	float total;
	float average;
};

main() {
	int n, i;
	printf("Enter number of students: ");
	scanf("%d", &n);
	struct Student stu[n];
	for(i=0; i<n; i++) {
		printf("\n----------------------\n");
		fflush(stdin);
		printf("Enter name: ");
		scanf("%[^\n]", stu[i].name);
		printf("Enter C Pro: ");
		scanf("%f", &stu[i].cpro);
		printf("Enter CPP: ");
		scanf("%f", &stu[i].cpp);
		printf("Enter Java: ");
		scanf("%f", &stu[i].java);
		stu[i].total = stu[i].cpro + stu[i].cpp + stu[i].java;
		stu[i].average = stu[i].total / 3.0;
	}
	printf("\n---------------- Student Info -----------------\n");
	printf("\tNo \tStudentName \tC Pro \tCPP \tJava \tTotal \tAverage\n");
	for(i=0; i<n; i++) {
		printf("\t%d", (i+1));
		printf("\t%s", stu[i].name);
		printf("\t\t%.2f", stu[i].cpro);
		printf("\t%.2f", stu[i].cpp);
		printf("\t%.2f", stu[i].java);
		printf("\t%.2f", stu[i].total);
		printf("\t%.2f\n", stu[i].average);
	}
	getch();
}
