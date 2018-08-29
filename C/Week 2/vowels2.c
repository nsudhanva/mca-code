#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char str2[23];
    printf("Enter the sentence to check if all the characters are vowels(press t to exit)..\n");
    scanf("%[aeiou ]%s", str, str2);
    puts(str);
    putchar('\n');

    if (!strcmp(str2, "t"))
        puts("There are no consonants..\n");
    else
        puts("There are consonants in the sentence u entered..\n");
}