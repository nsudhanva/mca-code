#include <stdio.h>
#define HALF(n) (n / 2)
#define QUARTER(n) (HALF(n) / 2)
int main()
{
    int x = 20;
    printf("Half: %d\n", HALF(x));
    printf("Quarter: %d\n", HALF(HALF(x)));
}