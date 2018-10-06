#include <stdio.h>

int isEven(int n)
{
    if(n == 0){
        return 1;
    }

    if(n % 2 == 0){
        return 1;
    }
    return 0;
}

int main()
{
    int i, j, n;
    printf("Enter limit: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((!(isEven(i)) && isEven(j)))
            {
                
            }
            else if((isEven(i) && !(isEven(j))))
            {
                
            }
            else if((isEven(i) && isEven(j)))
            {
                
            }
            else{
                
            }
        }
        printf("\n");
    }
}