#include <stdio.h>
int main()
{
    int x = 0x1234;
    printf("Hexadecimal number: ");
    printf("%x\n", x);

    unsigned int l = 5;
    unsigned char c = 'x';
    printf("Unsigned int and unsigned char: ");
    printf("%u %c\n", l, c);

    // Format Specifiers for double and long double
    double d;
    long double ld;
    // Answer below: 
    // scanf("%lf %Lf", &d, &ld);

    // File Inclusion directive
    // #include <stdio.h>
    // Simple Macro
    // #define UPPER 25

    // stdio.h
    // Searches stdio.h first in the include path and then in the current directory.

    printf("Output for s: ");
    int s = 2;
    #ifdef DEF
        s = s * 2;
    #else
        printf("%d\n", s);
    #endif

    // #pragma: Used to turn on and off certain features

    printf("Def of M: ");
    #define M
    #ifdef M
        #ifndef N
            printf("Hello\n");
        #else
            printf("Hi\n");
        #endif
    #endif

    printf("PUMP: ");
    #define PUMP(p) printf("n");
    PUMP("Lenovo");
    PUMP("DELL");
    printf("\n");

    printf("CUBE: ");
    #define CUBE(p) p * p * p
    int k;
    k = 27 / CUBE(3);
    printf("%d\n", k);

    printf("SEMI1: ");
    #define SEMI
    int j = 5;
    printf("%d\n", j) SEMI;

    // undef only for previous
    #undef SEMI

    printf("SEMI2: ");
    #define SEMI ;
    int p = 5;
    printf("%d\n", p) SEMI

    printf("Future: ");
    #define FUTURE think
    printf("FUTURE\n");

    printf("POD: ");
    #define POD(X) (X * X)
    int i = 3, v;
    v = POD(i + 2);
    printf("%d\n", v);

    printf("DEV: \n");
    #define DEV(a)
    int a = 12;
    //  Error in below line
    // printf("%d\n", DEV);
    printf("\n");
    // scanf("%12ld %5hd %15lf %15le", &a, &b, &c, &d);
    // a is assigned a long decimal integer with a maximum field width of 12 
    // b is assigned a short decimal integer with a maximum field width of 5 
    // c and d are assigned double precision quantities with maximum field widths of 15.

    printf("Variable Declarations: \n");
    float s1 = 2.5, t = 0.0005, u = 3000;
    printf("%3f %3f %3f\n", s1, t, u);
    printf("%12.4e %12.4f %12.4f\n", s1, t, u);
    printf("\n");

    printf("Character: \n");
    char text[80] = {"sudhanvanarayana"};
    printf("Floats: \n");
    printf("%.8f\n", text);
    printf("%13.8f\n", text);
    printf("%-13.8f\n", text);
    printf("\n");
    printf("Strings: \n");
    printf("%.8s\n", text);
    printf("%13.8s\n", text);
    printf("%-13.8s\n", text);
    printf("\n");
    
    printf("Output include help: \n");
    printf("includehelp.com\rOK\n"); 
    printf("includehelp.com\b\b\bOk\n");
}