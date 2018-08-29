#include <stdio.h>
#include <math.h>
int main()
{
    float p = 5000, t = 10, r = 0.05, CI, n = 12;
    CI = p * pow((1 + (r / n)), (n * t));
    printf("Compound Interest: %f", CI);
}