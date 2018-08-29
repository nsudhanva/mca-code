#include <stdio.h>

int check(int i, int j, int row, int column)
{
    if (i < 0 || i >= row || j >= column || j < 0)
        return 0;
    return 1;
}

int main()
{
    int i, j, p, a[10][10], n;
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

    int row = n;
    int column = n;

    for (p = 0; p < row; p++)
    {
        printf("%d\t", a[p][0]);
        i = p - 1; 
        j = 1;

        while (check(i, j, row, column))
        {
            printf("%d\t", a[i][j]);
            i--;
            j++; 
        }
    }

    for (p = 1; p < column; p++)
    {
        printf("%d\t", a[row - 1][p]);
        i = row - 2; 
        j = p + 1; 

        while (check(i, j, row, column))
        {
            printf("%d\t", a[i][j]);
            i--;
            j++; 
        }
    }
}