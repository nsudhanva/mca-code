#include <stdio.h>
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

    int largest = 0;

    p_arr = a;

    for (i = 0; i < 10; i++)
    {
        if(*p_arr > largest){
            largest = *p_arr;
        }
        p_arr++;
    }

    printf("Largest: %d\n", largest);
    printf("Largest Address: %u\n", &largest);
}