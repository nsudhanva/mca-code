#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n, sum = 0;
    printf("Enter the limit: \n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if(i % 2 == 0){
            sum = sum + i;
        }
        else{
            sum = sum - i;
        }
    }

    printf("Sum: %d", sum + 1);
}