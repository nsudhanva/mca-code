#include<stdio.h>
struct emp{
		int empid;
		char empname[15];
		float salary;
};
struct emp e[10];
int main()
{
	int i,n;
	printf("enter the number of employee\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d the employee id\n",i+1);
		scanf("%d",&e[i].empid);
		printf("enter %d the employee salary\n",i+1);
		scanf("%f",&e[i].salary);
		printf("enter %d the employee name\n",i+1);
		scanf("%s",e[i].empname);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d the employee id",i+1);
		printf("%d\n",e[i].empid);
                printf(" %d the employee salary",i+1);
		printf("%f\n",e[i].salary);
		printf(" %d the employee name",i+1);
		printf("%s\n",e[i].empname);
}
		
		
return 0;
}
