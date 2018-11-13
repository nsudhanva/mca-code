#include<stdio.h>
#include<string.h>

#define SIZE 100

void shifttable(int table[], char pattern[]);
int horspool(int table[], char text[], char pattern[]);

int main()
{
    char text[SIZE], pattern[SIZE];
    int table[SIZE];

    printf("Enter a string (underscore sep): \n");
    scanf("%s", &text);

    printf("Enter a pattern: \n");
    scanf("%s", &pattern);

    shifttable(table, pattern);

    int position = horspool(table, text, pattern);

    if(position >= 0){
        printf("Pattern found at position: %d\n", position);
    }
    else {
        printf("Pattern not found\n");
    }
}

void shifttable(int table[], char pattern[])
{
    int i, j, m;
    m = strlen(pattern);

    for(i = 0; i < SIZE; i++){
        table[i] = m;
    }

    for(j = 0; j < m - 1; j++){
        table[pattern[j]] = m - 1 - j;
    }
}

int horspool(int table[], char text[], char pattern[])
{
    int i, j, k, m, n;
    n = strlen(text);
    m = strlen(pattern);

    i = m - 1;

    while(i < n)
    {
        k = 0;

        while((k < m) && (pattern[m - 1 - k] == text[i - k])){
            k++;
        }

        if(k == m){
            return(i - m + 1);
        }
        else {
            i += table[text[i]];
        }
    }
    return -1;
}
