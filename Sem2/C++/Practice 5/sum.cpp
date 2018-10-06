#include<iostream>
using namespace std;

template <class T>

T sum(T a, T b)
{
    return a + b;
}

template <class T>

T sum(T a, T b, T c)
{
    return a + b + c;
}

int main()
{
    int a = 10, b = 20;
    float c = 2.3, d = 5.67, e = 5.22;
    cout << "Int: " << sum(a, b) << endl;
    cout << "Float: " << sum(c, d, e) << endl;
}