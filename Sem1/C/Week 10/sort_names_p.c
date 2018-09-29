#include <stdio.h>
#include <string.h>

void sort_names(char **names, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                char *temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i = 1, *ip = &i;

    char *students[] = {
        "sudhanva",
        "naryana",
        "shreedhar",
        "ganapathi",
        "hegde"};

    printf("Before Sorting: \n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", students[i]);
    }

    printf("\n");

    sort_names(students, 5);

    printf("After Sorting: \n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", students[i]);
    }

    return 0;
}