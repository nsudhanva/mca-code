#include<stdio.h>
int main()
{
    char s[20];
    scanf("%[aeiou]s", s);

    printf("%s", s);
}