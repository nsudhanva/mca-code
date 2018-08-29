#include<stdio.h>
int main()
{
    int a[50], i;

    for(i = 0; i < 50; i++){
        a[i] = i;
    }

    for (i = 0; i <= 51; i++)
    {
        printf("%d\n", a[i]);
    }
}