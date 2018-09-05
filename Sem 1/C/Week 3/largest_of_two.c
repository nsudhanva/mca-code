#include <stdio.h>
#define LARGEST(x, y) ((x > y) ? x : y)
int main()
{
    int a = 10, b = 20;
    int largest = LARGEST(a, b);
    printf("Largest: %d\n", largest);
}