#include <stdio.h>
int main()
{
    int n = 1, m = 100, i, count = 0, sum = 0;

    for (i = n; i <= m; i++)
    {
        if (i % 2 != 0 && i % 3 != 0)
        {
            printf("I: %d\n", i);
            count++;
            sum = sum + i; 
        }
    }

    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
}
