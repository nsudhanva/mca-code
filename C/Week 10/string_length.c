#include<stdio.h>
int main()
{
	char str[10];
	int *s;

	printf("Enter a string: \n");
	scanf("%s", str);

	s = &str;
	
	int i, count = 0;

	for(i = 0; str[i] != '\0'; i++){
		count++;
	}

	printf("Length of the string: %d\n", count);
}