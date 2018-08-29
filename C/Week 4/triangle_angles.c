#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
    double a = 50, b = 20, angle = 60;
    double area;

    area = (a * b * sin(angle * (180 / PI))) / (double)2;

    printf("Area: %f sq cms", area);
}