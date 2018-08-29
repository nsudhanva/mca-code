#include <stdio.h>
int main()
{
    int i, j, a[10][10], n;
    printf("Enter the limit: \n");
    scanf("%d", &n);

    printf("Enter matrix elements: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int choice; 

    printf("Enter what you want to exchange: \n");
    printf("1. Row\n");
    printf("2. Column\n");
    printf("\n");
    scanf("%d", &choice);
    
    int temp;
    int ex_1, ex_2;

    switch(choice)
    {
        case 1:

            printf("Enter row do you want to exchange: (Index starts at 0) \n");
            scanf("%d", &ex_1);

            printf("Enter row do you want to exchange with: (Index starts at 0) \n");
            scanf("%d", &ex_2);

            printf("\n");

            printf("Before Exchanging: \n");

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }

            printf("\n");


            for (i = 0; i < n; i++)
            {
                temp = a[ex_1][i];
                a[ex_1][i] = a[ex_2][i];
                a[ex_2][i] = temp;
            }

            printf("\n");

            printf("After Exchanging: \n");

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }

            printf("\n");
            break;

        case 2:

            printf("Enter column do you want to exchange: (Index starts at 0) \n");
            scanf("%d", &ex_1);

            printf("Enter column do you want to exchange with: (Index starts at 0) \n");
            scanf("%d", &ex_2);

            printf("\n");

            printf("Before Exchanging: \n");

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }

            printf("\n");

            for (i = 0; i < n; i++)
            {
                temp = a[i][ex_1];
                a[i][ex_1] = a[i][ex_2];
                a[i][ex_2] = temp;
            }

            printf("\n");

            printf("After Exchanging: \n");

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }

            printf("\n");
            break;

        default: printf("Wrong option!\n");
    }

}