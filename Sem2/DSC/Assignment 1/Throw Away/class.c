#include <stdio.h>
struct std
{
	char name[50], srn[20];
	int marks[5], total;
	float avg;
};

int main()
{
	struct std std1[10];
	int i, j = 0, svg[5];
	float avg[5];
	for (i = 0; i < 10; i++)
	{
		printf("\n\nPlease enter the Details of %d student\n\n", i + 1);
		printf("Please enter the name\n");
		scanf("%s", std1[i].name);
		printf("Please enter the SRN\n");
		scanf("%s", std1[i].srn);
		std1[i].total = 0;
		std1[i].avg = 0.00;
		for (j = 0; j < 5; j++)
		{
			printf("Please enter the marks of %d th subject\n", j + 1);
			scanf("%d", &std1[i].marks[j]);
			std1[i].total = std1[i].total + std1[i].marks[j];
		}
		std1[i].avg = std1[i].total / 5;
	}
	printf(" \n\nMARKS DETAILS OF STUDENT\n");
	for (i = 0; i < 10; i++)
	{
		printf("Name of the student %s\n", std1[i].name);
		printf("SRN of the student %s\n", std1[i].srn);
		for (j = 0; j < 5; j++)
			printf(" Marks of %d  subject is : %d\n", j, std1[i].marks[j]);
		printf("total marks is %d and Avarage id %f\n", std1[i].total, std1[i].avg);
	}
	printf("subject wise total\n");
	for (j = 0; j < 5; j++)
	{
		svg[j] = 0;
		for (i = 0; i < 10; i++)
			svg[j] = svg[j] + std1[i].marks[j];
		avg[j] = svg[j] / 10;
		printf("%d subject total and avarage is %d and %f\n", j + 1, svg[j], avg[j]);
	}
	return 0;
}