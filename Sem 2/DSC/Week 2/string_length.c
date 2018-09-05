#include <stdio.h>
int main()
{
    char s[20], i;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; ++i);

    printf("Length of string: %d\n", i);
}
