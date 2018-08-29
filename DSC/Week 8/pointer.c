#include<stdio.h>

void change(int *a)
{
    int *b;
    *b = *a;
    *b = *b + 1;
    b = a;
    printf("A: %d\n", *a);
    printf("B: %d\n", *b);
}

int main()
{
    int x;
    x = 10;
    change(&x);
    printf("X: %d\n", x);
}