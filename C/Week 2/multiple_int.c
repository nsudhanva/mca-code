// Week 2, Program 2

#include <stdio.h>
int main()
{
    int i = 0, sum = 0;
    char number[5];

    printf("\nEnter five numbers: ");

    while ((number[i] = getchar()) != '\n'){
        i++;
    }

    for (i = 0; i < 4; i++)
    {
        sum = sum + number[i];
        printf("%c\t", number[i]);
    }

    printf("%c\n", sum);
}