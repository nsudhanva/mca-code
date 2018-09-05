#include<stdio.h>
int main()
{
    char a[10];
    scanf("%[aeiou]", a);
    printf("%s", a);
}