#include<stdio.h>
int main()
{
    int a, b, c;
    a = 1; b = 2; c = 3;
    printf("Before swapping: ");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);
    printf("After swapping: ");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

}