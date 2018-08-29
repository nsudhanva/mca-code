#include<iostream>
using namespace std;

template <class num>

num swap(num *x, num *y)
{
    cout << "Before Swapping: " << endl;
    cout << "X: " << *x << " "
         << "Y: " << *y << endl;
    num temp = *x;
    *x = *y;
    *y = temp;
    cout << "Before Swapping: " << endl;
    cout << "X: " << *x << " "
         << "Y: " << *y << endl;
}

int main()
{
    int a = 10, b = 20;
    float p = 30.2, q = 25.6;
    char c = 'f', d = 'g';
    swap(&a, &b);
    swap(&p, &q);
    swap(&c, &d);
}