#include<stdio.h>
#include<math.h>
// double sqroot(double square)
// {
//     double root = square / 3;
//     int i;
//     if (square <= 0)
//         return 0;
//     for (i = 0; i < 32; i++)
//         root = (root + square / root) / 2;
//     return root;
// }

#define ROOTS(a, b, c) (((b) * (b))- (4) * (a) * (c))
#define DENO(a) ((2) * (a))
// #define QUADP(a, b, c) (ROOTS(a, b, c) / DENO(a))
// #define QUADN(a, b, c) ((b - sqroot(b * b) - 4 * a * c) / (2 * a))

int main()
{
    int x = 1;
    int y = 5;
    int z = 6;
    printf("b2 4ac: %f\n", ROOTS(x, y, z));
    printf("sqrt(b2 4ac): %f\n", sqrt(ROOTS(x, y, z)));
    printf("2a: %f\n", DENO(x));

    float root1 = ;
    float root2 = ;    

    printf("Root 1: %f \n", root1);
    printf("Root 2: %f \n", root2);
}

