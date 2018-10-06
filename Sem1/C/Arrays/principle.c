#include <stdio.h>
int main()
{
    int i, j, a[10][10], n, principle = 0, secondary = 0;
    printf("Enter the limit: \n");
    scanf("%d", &n);

    printf("Enter matrix elements: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i == j){
                principle = principle + a[i][j];
            }
        }
    }

    i = 0, j = n - 1;
    while(i < n){
        secondary = secondary + a[i][j];
        i++; j--;
    }

    printf("Sum of priciple diagonal elements: %d\n", principle);
    printf("Sum of secondary diagonal elements: %d\n", secondary);
}