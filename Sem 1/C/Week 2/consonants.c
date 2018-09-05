#include <stdio.h>
int main()
{
    char s[20];
    scanf("%[^abcde]", s);

    printf("%s", s);
}