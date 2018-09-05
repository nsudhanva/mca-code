#include <stdio.h>
int main()
{
    int i, j, a[10][10], n, count_0 = 0, count_x = 0;
    printf("Enter the limit: \n");
    scanf("%d", &n);

    printf("Enter matrix elements: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] == 0){
                count_0++;
            }
            else{
                count_x++;
            }
        }
    }

    if(count_0 > count_x){
        printf("Sparse Matrix\n");
    }
    else{
        printf("Not a Sparse Matrix\n");
    }
    
}