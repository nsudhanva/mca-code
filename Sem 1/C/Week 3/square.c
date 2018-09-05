#include <stdio.h>
#define SQUARE(x) (x * x)
int main()
{
    int a = 5;
    int square = SQUARE(a);
    printf("SQUARE: %d\n", square);
}