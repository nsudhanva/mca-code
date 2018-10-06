#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the limit: \n");
    scanf("%d", &n);
    
    int a[n], b[n], c[n];

    printf("Enter array 1 elements: \n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter array 2 elements: \n");

    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf("Sum of two arrays: \n");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
}