#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter the number of element\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("%d element is a[%d] is=%d\n",i+1,i,a[i]);
	}
return 0;
}
