#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[] = {2, 4, 5, 4, 6};
    int n;
    printf("Enter an element position to delete:\n");
    scanf("%d", &n);
    printf("\n");
    
    a[n] = a[n + 1];
    a[n + 1] = a[n + 2];
    a[n + 2] = a[n + 3];
    // a[n + 3] = a[n + 4];
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }
}