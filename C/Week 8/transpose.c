#include <stdio.h>

int main()
{
    int a[10][10], t[10][10], row, col, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of matrix:\n");

    for(i = 0; i < row; i++)
    {        
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered Matrix: \n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
            if (j == col - 1)
                printf("\n\n");
        }
    }

    for(i = 0; i < row; i++)
    {   
        for(j = 0; j < col; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of Matrix:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d  ", t[i][j]);

            if(j == row - 1)
                printf("\n\n");
        }
    }

    return 0;
}
