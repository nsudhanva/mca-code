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

    int row, column, row_sum = 0, column_sum = 0;
    printf("Enter the row that you want to sum: (Greater than zero) \n");
    scanf("%d", &row);

    for (i = row - 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            row_sum = row_sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", row, row_sum);
        break;
    }

    printf("Enter the column that you want to sum: (Greater than zero) \n");
    scanf("%d", &column);

    for (i = 0; i < n; i++)
    {
        for (j = column - 1; j < n; j++)
        {
            column_sum = column_sum + a[j][i];
        }
        printf("Sum of column %d = %d\n", column, column_sum);
        break;
    }
}