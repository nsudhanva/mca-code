#include<stdio.h>
int main()
{
    int a = 2;
    printf("%d\n", -a * --a && --a || --a);

    int b = 2;

    if(b-- || --b || a--)
        b += 1;
    printf("%d", b);
}