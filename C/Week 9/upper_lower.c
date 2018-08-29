#include <stdio.h>
int main()
{
	char a[100];
	int i;

	printf("Enter a string: \n");
	scanf("%s", a);

	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] >= 97 && a[i] <= 122){
			a[i] = a[i] - 32;
		}

		// if(a[i] >= 65 && a[i] <= 90){
		// 	a[i] = a[i] + 32;
		// }
	}

	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] >= 65 && a[i] <= 90){
			a[i] = a[i] + 32;
		}
	}

	printf("%s\n", a);
}