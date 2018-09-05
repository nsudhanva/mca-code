#include<stdio.h>

// areaperi gets declared having normal int variable, two pointer floats as parameters
void areaperi(int, float*, float*);

int main()
{
    int radius = 10;

    // radius -> variable -> gets 10
    float area, perimeter;

    // areaperi gets called
    // areaperi gets 'radius (10)', address of 'area', address of 'perimeter' as arguments
    areaperi(radius, &area, &perimeter);

    /* Read this later */
    // Since we passed the address, the original variables gets new values
    // so now
    // area = 314, perimeter = 62.8 (Calculated at line 36 and 41)
    /* Read this later */

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
}

// areaperi definition
void areaperi(int r, float *a, float *p)
{
    // areaperi receives arguments from call
    // now r => radius => 10
    // a => address of 'area'
    // p => address of 'perimeter'

    //*a => value of 'a' - nothing in this case
    *a = 3.14 * r * r;

    //*a => value of 'a' - calcuated as 3.14 * 10 * 10

    //*p => value of 'p' - nothing in this case
    *p = 2 * 3.14 * r;

    //*p => value of 'p' - calcuated as 2 * 3.14 * 10

    // again, recall that
    // a => address of 'area'
    // p => address of 'perimeter'

    // goto 'Read this later'
}