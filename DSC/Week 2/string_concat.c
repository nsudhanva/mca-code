#include <stdio.h>
 
void concatenate(char [], char []); 
 
int main()
{
    char string1[20], string2[20];

    printf("Enter a string: \n");
    scanf("%s", string1);

    printf("Enter a string to concat: \n");
    scanf("%s", string2);

    concatenate(string1, string2); 

    printf("String concatenation: %s\n", string1);
}
 
void concatenate(char string1[], char string2[]) 
{
    int i, j;

    i = 0;

    while (string1[i] != '\0') {
        i++;      
    }

    j = 0;

    while (string2[j] != '\0') {
        string1[i] = string2[j];
        j++;
        i++;    
    }

    string1[i] = '\0';
}