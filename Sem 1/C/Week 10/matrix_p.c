#include <stdio.h>
int main()
{
    int a[10][10], row, col, i, j, x, y, p, q;

    printf("Enter row and columns: ");
    scanf("%d%d", &row, &col);

    printf("Enter matrix elements: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix elements: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }

    printf("Enter index of first element to be added: \n");
    scanf("%d %d", &x, &y);

    printf("Enter index of second element to be added: \n");
    scanf("%d %d", &p, &q);

    printf("Addition of %d and %d is: %d", *(*(a + x) + y), *(*(a + p) + q), *(*(a + x) + y) + *(*(a + p) + q));
}