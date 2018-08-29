#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, i, j;
    printf("Enter the number of strings to be stored: \n");
    scanf("%d", &n);

    printf("Enter character limit per string: \n");
    scanf("%d", &m);

    char a[n][m], b[n][m], temp[100];

    printf("Enter %d strings: \n", n);

    for(i = 0; i < n; i++){
        scanf("%s", &a[i]);  
        strcpy(b[i], a[i]);   
    }

    for(i = 0; i < n - 1 ; i++)
    {
        for(j = i + 1; j< n; j++)
        {
            if(strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("Sorted names: \n");

    for(i = 0; i < n; i++){
        printf("%s\n", &a[i]);     
    }

    printf("\n");
}