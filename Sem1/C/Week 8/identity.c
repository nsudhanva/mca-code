#include <stdio.h>

int main()
{
    int a[10][10], row, col, i, j;
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

    int flag = 1;

    for(i = 0; i < row; i++)
    {   
        for(j = 0; j < col; j++)
        {
            if(i > j){
                if(a[i][j] != a[j][i]){
                    flag = 0;
                }
            }
        }
    }

    for(i = 0; i < row; i++)
    {   
        for(j = 0; j < col; j++)
        {
            if(i == j){
                if(a[i][j] != 1){
                    flag = 0;
                }
            }
        }
    }

    if(flag){
        printf("Identity matrix\n");
    }
    else{
        printf("Not a indentity matrix\n");
    }

}
