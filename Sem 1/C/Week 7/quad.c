#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter co efficient of x: \n");
    scanf("%f", &a);
    printf("Enter co efficient of y: \n");
    scanf("%f", &b);
    printf("Enter co efficient of z: \n");
    scanf("%f", &c);
    
    float x1, x2;
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("Roots 1: x1 = %f\n", x1);
    printf("Roots 2: x2 = %f\n", x2);
}