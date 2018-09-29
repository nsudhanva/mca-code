#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main()
{
    int n, i;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("\n");

    printf("Prime Factors: \n");

    for (i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}

int isPrime(int x)
{
    int i;
    if (x < 2)
        return 0;
    for (i = 2; i <= sqrt(x); i++)
    {
        if ((x % i) == 0)
            return 0;
    }
    return 1;
}
