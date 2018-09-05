#include <stdio.h>
#include <string.h>
 
int main()
{
	char letter, choice[2];
	int ascii, len, binary[8], total, i;
	char str[100];
	printf("Enter a string: \n");
	scanf("%s", &str);

	len = strlen(str);  

	for(i = 0; i < len; i++)
	{
		total = 0;
		letter = str[i]; 
		ascii = letter;    
		                   
		while(ascii > 0) 		 
		{
			if((ascii % 2) == 0)
			{
				binary[total] = 0;
				ascii = ascii / 2;
				total++;
			}
			else
			{
				binary[total] = 1;
				ascii = ascii / 2;
				total++;
			}
		}

		total--; 

		while(total >= 0)
		{
	 		printf("%d", binary[total]);
	 		total--;
		}

		printf("\n");
	}
}        
