#include <stdio.h>
int main()
{
    int i, j, a[10][10], n;
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

    printf("Upper diagonal elements: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i < j){
                printf("%d\t", a[i][j]);
            }
        }        
    }

    printf("\n");

    printf("Lower diagonal elements: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                printf("%d\t", a[i][j]);
            }
        }        
    }

    printf("\n");
}