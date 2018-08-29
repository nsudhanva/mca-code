#include<stdio.h>
#define SIZE 10

void read_matrix(int a[][SIZE], int m, int n);
void print_matrix(int a[][SIZE], int m, int n);

int col_major(int a[][SIZE], int m, int n, int row_no, int col_no);
int row_major(int a[][SIZE], int m, int n, int row_no, int col_no);

int main()
{
    int a[SIZE][SIZE], m, n;
    int address, row_no, col_no;

    printf("Enter matrix sizes: \n");
    scanf("%d %d", &m, &n);

    read_matrix(a, m, n);
    print_matrix(a, m, n);

    printf("Enter the base address: \n");
    scanf("%d", &address);

    printf("Enter the row no and col no: \n");
    scanf("%d %d", &row_no, &col_no);

    int row_m = address + row_major(a, m, n, row_no, col_no);
    int col_m = address + col_major(a, m, n, row_no, col_no);

    printf("Address of a[%d][%d], row major = %d\n", m, n, row_m);
    printf("Address of a[%d][%d], column major = %d\n", m, n, col_m);
}

void read_matrix(int a[][SIZE], int m, int n)
{
    int i, j;
    printf("Enter matrix elements: \n");

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void print_matrix(int a[][SIZE], int m, int n)
{
    int i, j;

    printf("Entered matrix elements: \n");
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int row_major(int a[][SIZE], int m, int n, int row_no, int col_no)
{
    int offset;
    offset = row_no * n + col_no;
    return offset;
}

int col_major(int a[][SIZE], int m, int n, int row_no, int col_no)
{
    int offset;
    offset = col_no * m + row_no;
    return offset;
}