#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[20];
    gets(s);
    int i;

    for(i = 0; i < (sizeof(s)/sizeof(s[0])); i++){
        if(isupper(s[i])){
            printf("%c", s[i]);
        }
    }
    printf("\n");
}