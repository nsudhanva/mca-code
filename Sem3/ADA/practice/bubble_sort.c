#include<stdio.h>

// This function swaps two values using reference
void swap(int *x, int *y);

// This function sorts an array of integers using bubble sort
void bubble_sort(int a[], int n);

int main()
{
    int a[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    bubble_sort(a, n);

    printf("Sorted Array: \n");

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");
}

void swap(int *x, int *y)
{
    int temp*;
    temp = *a[i];
    *a[i] = *a[j];
    *a[j] = temp;
}

void bubble_sort(int a[], int n)
{
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i] < a[j]){
                swap(&a[i], &a[j])
            }
        }
    }
}
