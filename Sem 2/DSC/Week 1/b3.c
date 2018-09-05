#include<stdio.h>
int main()
{
	int s[10], i,total=0;
	char name[10];
	printf("enter  the name opf the student\n");
	scanf("%s",name);
	printf("enter the marks obtained in 5 subject\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("total marks obtained");
	for(i=0;i<5;i++)
	{
		total=total+s[i];
	}
	printf("total is %d\n",total);
return 0;
}	
