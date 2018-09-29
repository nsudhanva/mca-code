#include <stdio.h>
int main()
{
    char s[20];
    scanf("%20s", s);

    printf("%s is not justified\n", s);
    printf("%10s is right justified", s);
    printf("%-10s is left justified\n", s);
}