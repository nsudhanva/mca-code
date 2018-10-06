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

    printf("\n");

    printf("Your matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int ex_i_1, ex_j_1;
    printf("Enter index i and j to exchange with: (index starts with 0) \n");
    scanf("%d %d", &ex_i_1, &ex_j_1);

    int ex_i_2, ex_j_2;
    printf("Enter index of i and j of element to exchange: (index starts with 0)\n");
    scanf("%d %d", &ex_i_2, &ex_j_2);

    printf("\n");
    
    printf("Before Exchange: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int temp;
    temp = a[ex_i_1][ex_j_1]; 
    a[ex_i_1][ex_j_1] = a[ex_i_2][ex_j_2];
    a[ex_i_2][ex_j_2] = temp;

    printf("After Exchange: \n");

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