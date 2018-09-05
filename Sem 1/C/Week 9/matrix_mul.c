#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], row, col, row1, col1, row2, col2, i, j, k;
    
    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter elements of matrix:\n");

    for(i = 0; i < row1; i++)
    {        
        for(j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of matrix 2: ");
    scanf("%d %d", &row2, &col2);

    printf("Enter elements of matrix:\n");

    for(i = 0; i < row2; i++)
    {        
        for(j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if(col1 != row2){
        printf("Rows and columns dont match!\n");
        return 0;
    }

    if(row1 > row2){
        row = row1;
    }
    else{
        row = row2;
    }

    if(col1 > col2){
        col = col1;
    }
    else{
        col = col2;
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < row; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Result: \n");

    for(i = 0; i < row; i++)
    {        
        for(j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}
