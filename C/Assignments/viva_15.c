#include <stdio.h>
int main()
{
    // int i = 4;

    // switch (i)
    // {
    //     default:;
    //     case 3:
    //         i += 5;
    //         if (i == 8)
    //         {
    //             i++;
    //             if (i == 9)
    //                 break;
    //             i *= 2;
    //         }
    //         i -= 4;
    //         break;
    //     case 8:
    //         i += 5;
    //         break;
    // }
    // printf("i = %d\n", i);

    // int a = 10, b;
    // a >= 5 ? b = 100 : b = 200;
    // printf("\n%d", b);

    int arr[5], i = 0;
    while (i < 5)
        arr[i] = ++i;
    for (i = 0; i < 5; i++)
        printf("%d, ", arr[i]);
}