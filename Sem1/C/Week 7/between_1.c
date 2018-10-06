#include<stdio.h>
int main()
{
    int n = 100, m = 200, i, count = 0, sum = 0;

    for(i = n; i <= m; i++){
        if(i % 7 == 0){
            sum = sum + i;
            count++;
        }
    }

    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
}
