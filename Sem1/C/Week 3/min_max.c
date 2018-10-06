#include <stdio.h>
#include <stdlib.h>
#define MAX(x, y) ((x > y) ? x : y)
#define MIN(x, y) ((x < y) ? x : y)
#define ABS(x) (abs(x))
int main()
{
    int a = 10, b = 20, c = -10;
    printf("Max: %d\n", MAX(a, b));
    printf("Min: %d\n", MIN(a, b));
    printf("Absolute: %d\n", ABS(c));
}