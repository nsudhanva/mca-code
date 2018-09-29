#include <iostream>
#define PI 3.141592654
using namespace std;

float volume(float r, float h)
{
    return PI * r * r * h;
}

float volume(float r)
{
    return PI * r * r * r * (4.0 / 3.0);
}

int main()
{
    cout << "Volume of Cylinder: " << volume(3, 4) << endl;
    cout << "Volume of Sphere: " << volume(5) << endl;
}