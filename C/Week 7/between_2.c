#include <stdio.h>
int main()
{
    int n = 0, m = 100, i, count = 0;

    for (i = n; i <= m; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
            count++;
        }
    }

    printf("Count: %d", count);
}
