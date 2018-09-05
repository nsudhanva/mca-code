#include<stdio.h>
int main()
{
    int i, a[10];
    int *p_arr;
    
    p_arr = a;

    printf("Enter 10 elements: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", p_arr);
        p_arr++;
    }

    p_arr = &a[10 - 1];

    for (i = 10 - 1; i >= 0; i--)
    {
        printf("%d ", *p_arr);
        p_arr--;
    }
}