#include<stdio.h>

int is_prime(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(is_prime(n)){
        printf("Prime number..");
    }
    else{
        printf("Not a prime number..");
    }
}

int is_prime(int n)
{
    int flag = 1;
    int i;

    for(i = 2; i < n; i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}
