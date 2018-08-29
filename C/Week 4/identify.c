#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float area;
    printf("Enter 3 sides: \n");
    scanf("%f %f %f", &a, &b, &c);

    if(a == b && a == c && b == c){
        printf("Equilateral\n");
    }
    else if((a == b) || (b == c) || (a == c)){
        printf("Isosceles\n");
    }
    else{
        printf("Scalene");
    }
}