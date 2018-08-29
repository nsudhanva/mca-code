#include<stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n;

    printf("Enter postion to split: \n");
    scanf("%d", &n);

    int size = 8;
    int new_size_1 = 8 - n;
    int new_size_2 = 8 - new_size_1;

    int i, b[new_size_1 + 1], c[new_size_2 + 1];

    for(i = 0; i < new_size_1; i++){
        b[i] = a[i];
    }

    for (i = new_size_1; i < 8; i++){
        c[i] = a[i];
        // printf("%d\t", c[i]);
    }
    printf("\n");
    // printf("New Size 2: %d\n", new_size_2);

    for(i = 0; i < new_size_1; i++){
        printf("%d\t", b[i]);
    }
    printf("\n");

    for (i = new_size_1; i < 8; i++){
        printf("%d\t", c[i]);
    }
    printf("\n");
}