// https://repl.it/repls/LittleLikableAcornweevil

#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Size of Short Int: %d\n", sizeof(short int));
    printf("Size of Unsigned Short Int: %d\n", sizeof(unsigned short int));
    printf("Size of Unsigned Int: %d\n", sizeof(unsigned int));
    printf("Size of Int: %d\n", sizeof(int));
    printf("Size of Long Int: %d\n", sizeof(long int));
    printf("Size of Unsigned Long Int: %d\n", sizeof(unsigned long int));
    printf("Size of Long Long Int: %d\n", sizeof(long long int));
    printf("Size of Unsigned Long Long Int%d\n", sizeof(unsigned long long int));
    printf("Size of Char: %d\n", sizeof(signed char));
    printf("Size of Unsigned Char: %d\n", sizeof(unsigned char));
    printf("Size of Float: %d\n", sizeof(float));
    printf("Size of Double: %d\n", sizeof(double));
    printf("Size of Long Double: %d\n", sizeof(long double));
    printf("\n");
    printf("Range of Short Int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of Unsigned Short Int: 0 to %d\n", USHRT_MAX);
    printf("Range of Unsigned Int: 0 to %lu\n", UINT_MAX);
    printf("Range of Int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of Long Int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of Unsigned Long Int: 0 to %lu\n", ULONG_MAX);
    printf("Range of Long Long Int: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
    printf("Range of Unsigned Long Long Int: 0 to %llu\n", ULONG_LONG_MAX);
    printf("Range of Char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of Unsigned Char: 0 to %d\n", UCHAR_MAX);
    // printf("Range of Float: %e to %e\n", FLT_MIN, FLT_MAX);
    // printf("Range of Double: %e to %e\n", DBL_MIN, DBL_MAX);
    // printf("Range of Long Double: %e to %e\n", LDBL_MIN, LDBL_MAX);
}