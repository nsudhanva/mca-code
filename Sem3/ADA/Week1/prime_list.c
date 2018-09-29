#include<stdio.h>

void create_bool_array(int a[], int n);
void create_prime(int prime_array[], int n);

int main()
{
    int n, i, prime_array[100];
    printf("Enter a limit: ");
    scanf("%d", &n);
    
    create_bool_array(prime_array, n);
    create_prime(prime_array, n);

    printf("Prime Numbers: ");

    for(i = 2; i <= n; i++){
        if(prime_array[i]){
            printf("%d ", i);
        }
    }

    printf("\n");
}

void create_bool_array(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++){
        a[i] = 1;
    }
}

void create_prime(int prime_array[], int n)
{
    int i, j;

    for(i = 2; i <= n; i++){
        if(prime_array[i] == 1){
            for(j = i * 2; j <= n; j += i){
                prime_array[j] = 0;
            }
        }
    }
}
