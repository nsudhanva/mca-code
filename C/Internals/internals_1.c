#include<stdio.h>
int i = 0;
int main()
{
    // printf("Question 1: \n");
    // int i = 1;
    // printf("%d\n", i);
    // {
    //     int i = 2;
    //     printf("%d\n", i);
    //     {
    //         i = i + 1;
    //         printf("%d\n", i);
    //     }
    //     printf("%d\n", i);
    // }
    // printf("%d\n", i);

    // printf("Question 2: \n");
    // {
    //     {
    //         int var = 10;
    //     }
    //     {
    //         // printf("%d", var); 'var' undeclared (first use in this function)
    //     }
    // }

    // printf("Question 3: \n");
    // {
    //     int x = 40;
    //     {
    //         int x = 20;
    //         printf("%d\n", x);
    //     }
    //     printf("%d\n", x);
    // }

    printf("Question 4: \n");
    extern int a;
    a = 20;
    printf("%d\n", a);
}