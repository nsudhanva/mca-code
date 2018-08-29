#include <stdio.h>

int sum_of_digits(int x)
{
    if (x < 10)
    {
        return x;
    }
    else
    {
        return x % 10 + sum_of_digits(x / 10);
    }
}

int main()
{
    int x, i;
    scanf("%d", &x);
    printf("Sum of Digits: %d\n", sum_of_digits(x));
}
