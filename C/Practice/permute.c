#include<stdio.h>
int main()
{
    int a[] = {2, 4, 5, 7, 6};

    int i, j = 0, x = 0;
    int temp;

    do {
        for (i = 0; i < 5; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");

        // printf("Before: \n");
        // printf("A[%d] = %d\n", j, a[j]);
        // printf("A[%d] = %d\n", j + 1, a[j + 1]);
        // printf("A[%d] = %d\n", j + 2, a[j + 2]);
        // printf("A[%d] = %d\n", j + 3, a[j + 3]);
        // printf("A[%d] = %d\n", j + 4, a[j + 4]);

        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = a[j + 2];
        a[j + 2] = a[j + 3];
        a[j + 3] = a[j + 4];
        a[j + 4] = temp;

        // printf("After: \n");
        // printf("A[%d] = %d\n", j, a[j]);
        // printf("A[%d] = %d\n", j + 1, a[j + 1]);
        // printf("A[%d] = %d\n", j + 2, a[j + 2]);
        // printf("A[%d] = %d\n", j + 3, a[j + 3]);
        // printf("A[%d] = %d\n", j + 4, a[j + 4]);
        x++;
    } while(x < 6);
    
}