#include<stdio.h>
#include<math.h>
int main()
{
    float a = 5, b = 6, c = 7;
    float area, p;
    p = a + b + c;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area: %f sq cms", area);
}