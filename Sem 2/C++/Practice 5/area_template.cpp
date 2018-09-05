#include <iostream>
using namespace std;

template <class T>

T area(T a)
{
    return a * a;
}

template <class T>

T area(T a, T b)
{
    return a * b;
}

int main()
{
    int a = 10, b = 20;
    cout << "Square: " << area(a) << endl;
    cout << "Rectangle: " << area(a, b) << endl;
}