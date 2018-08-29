#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter a string: \n");
	scanf("%s", str);

	int i, v_count = 0, c_count = 0;

	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			v_count++;
		}
		else{
			c_count++;
		}
	}	

	printf("Vowels count: %d\n", v_count);
	printf("Consonants count: %d\n", c_count);
}