#include <stdio.h>

int main()
{
    int str[100], n, i, j, temp;

    printf("Enter string: \n");
    scanf("%s", str);

    for (n = 0; str[n] != '\0'; ++n);

    printf("Num: %d\n", n);

    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted String:\n");

    printf("%s\n", str);
}