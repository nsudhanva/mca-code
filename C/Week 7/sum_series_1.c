#include <stdio.h>
#include <math.h>
int main()
{
    float i, j, n, sum = 0;
    printf("Enter the limit: \n");
    scanf("%f", &n);

    for(i = 1; i <= n; i++){
        sum = sum + (pow((i/(i + 1)), (i + 1)));
        // printf("Sum i: %f\n", sum);
        // printf("i: %f\n", i);
    } 

    printf("Sum: %f", sum + 1);
}