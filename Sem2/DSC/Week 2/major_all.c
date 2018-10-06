#include <stdio.h>

void error_message();
int options();
void read_major(int address, int row, int col, int m, int n); 
void row_major(int address, int row, int col, int m, int n);
void col_major(int address, int row, int col, int m, int n);
int calculate_row(int row, int col, int m, int n);
int calculate_col(int row, int col, int m, int n);

int main()
{
    int address, row, col, m, n;

    printf("Enter matrix range: \n");
    scanf("%d %d", &m, &n);

    printf("Enter base address, row, col\n");
    scanf("%d %d %d", &address, &row, &col);

    if(row > m || col > n){
        error_message();
    }

    read_major(address, row, col, m, n);
}

void error_message()
{
    printf("Invalid option, please try again\n");
    return;
}

int options()
{
    int choice;
    printf("Enter for which datatype you have to calculate: \n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Double\n");
    printf("4. Char\n");

    scanf("%d", &choice);
    return choice;
}

void read_major(int address, int row, int col, int m, int n) 
{    
    int choice;

    printf("Enter choice of calculation: \n");
    printf("1. Row Major\n");
    printf("2. Column Major\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: row_major(address, row, col, m, n);
                break;

        case 2: col_major(address, row, col, m, n);
                break;
        
        default: error_message();
    }
}

void row_major(int address, int row, int col, int m, int n)
{
    int choice = options();
    int size;

    switch(choice)
    {
        case 1: size = calculate_row(row, col, m, n);
                printf("Size = %d\n", size);
                printf("Integer address size = %d\n", address + size * sizeof(int));
                break;
        case 2: size = calculate_row(row, col, m, n);
                printf("Size = %d\n", size);        
                printf("Float address size = %d\n", address + size * sizeof(float));
                break;
        case 3: size = calculate_row(row, col, m, n);
                printf("Size = %d\n", size);        
                printf("Double address size = %d\n", address + size * sizeof(double));
                break;
        case 4: size = calculate_row(row, col, m, n);
                printf("Size = %d\n", size);        
                printf("Character address size = %d\n", address + size * sizeof(char));
                break;
        default: error_message();
    }
}

void col_major(int address, int row, int col, int m, int n)
{
    int choice = options();
    int size;

    switch(choice)
    {
        case 1: size = calculate_col(row, col, m, n);
                printf("Size = %d\n", size);        
                printf("Integer address size = %d\n", address + size * sizeof(int));
                break;
        case 2: size = calculate_col(row, col, m, n);
                printf("Size = %d\n", size);        
                printf("Float address size = %d\n", address + size * sizeof(float));
                break;
        case 3: size = calculate_col(row, col, m, n);
                printf("Size = %d\n", size);        
                printf("Double address size = %d\n", address + size * sizeof(double));
                break;
        case 4: size = calculate_col(row, col, m, n);
                printf("Size = %d\n", size);                
                printf("Character address size = %d\n", address + size * sizeof(char));
                break;
        default: error_message();
    }
}

int calculate_row(int row, int col, int m, int n)
{
    int offset;
    offset = row * n + col;
    return offset;
}

int calculate_col(int row, int col, int m, int n)
{
    int offset;
    offset = col * m + row;
    return offset;
}