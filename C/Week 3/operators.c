#include <stdio.h>
#define PLUS +
#define SUB -
#define MUL *
#define DIV /
int main()
{
    int a = 20, b = 30;
    printf("Addition: %d\n", a PLUS b);
    printf("Subtraction: %d\n", a SUB b);
    printf("Multiplication: %d\n", a MUL b);
    printf("Division: %d\n", a DIV b);
}