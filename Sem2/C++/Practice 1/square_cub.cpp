#include <iostream>
using namespace std;

int a;
int cube;
int square;

int square(int a)
{
    return (a * a);
}

int cube(int a)
{
    return (a * a * a);
}

int main()
{
    cin >> a;
    cout << "Square: " << square(a) << endl;
    cout << "Cube: " << cube(a) << endl;
}