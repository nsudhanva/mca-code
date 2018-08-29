#include<stdio.h>
int main()
{
    // 1. Long int 23
    long int x = 23L;

    // 3. count
    unsigned int $count = 0;

    char ch = 'A';
    printf("CH = %d\n", ch);

    char c = 296;
    printf("296: ");
    printf("%d %c\n", c, c);

    char ch1 = '\t';
    printf("Tabs: ");
    printf("%c5\n", ch1);

    int b = -0777;
    printf("Negative to int: ");
    printf("%d\n", b);

    int n = +-1234;
    printf("+-1234: ");
    printf("%d\n", n);

    double d = (double)'a';
    printf("ASCII Value of a: ");
    printf("%0lf\n", d);

    float t = 24.45;
    int y = (int)t;
    printf("Float to int: ");
    printf("5%d 4.%.f\n", y, t);

    enum day
    {
        Sunday,
        Monday = -1,
        Tuesday,
        Wednesday = 6
    };

    printf("%d %d %d %d\n", Wednesday, Sunday, Tuesday, Monday);

    float z = 'a';
    printf("Float of a: ");
    printf("%f", z);
}