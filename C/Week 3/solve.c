#include <stdio.h>
#define SQUARE(x) (x * x)
#define SUM(x, y) (x + y)
#define SUMUL(x, y, z) (x + y * z)
#define MULSUM(x, y, z) ((x + x) * (y + y))

int main()
{
    int a = 5, b = 10, c = 15;
    printf("SQUARE: %d\n", SQUARE(a));
    printf("SUM: %d\n", SUM(a, b));
    printf("SUMUL: %d\n", SUMUL(a, b, c));
    printf("MULSUM: %d\n", MULSUM(a, b, c));
}