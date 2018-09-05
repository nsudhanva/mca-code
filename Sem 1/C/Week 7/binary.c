#include<stdio.h>

int main()
{
    unsigned long long n, rem, bin = 0, base = 1;
    printf("Enter a decimal number: \n");
    scanf("%ull", &n);

    while(n > 0){
        rem = n % 2;
        bin = bin + rem * base;
        n = n / 2;
        base = base * 10;
    }

    printf("Binary: %d\n", bin);
}