#include <stdio.h>

int bubble_sort(int n, int a[])
{
    int i, j, temp;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // for(i = 0; i < n; i++){
    //     printf("%d\t", a[i]);
    // }

    return a;
}

int main()
{
    int i, j, a[10][10], n, p, q;
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

    printf("\n");

    printf("Before Sorting: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int x[10];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            x[j] = a[j][i];
        }

        bubble_sort(n, x);

        int z;


        // for(z = 0; z < n; z++)
        // {
        //     printf("%d\t", x[z]);
        // }

        // printf("\n");

        for (j = 0; j < n; j++)
        {
            a[j][i] = x[j];
        }
    }

    printf("\n");

    printf("After Sorting: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}