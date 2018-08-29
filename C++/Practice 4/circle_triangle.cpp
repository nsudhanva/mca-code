#include<iostream>
using namespace std;

float area(int r){
    return (r * r * 3.14);
}

float area(int h, int b){
    return (0.5 * h * b);
}

int main()
{
    cout << "Area of circle: " << area(5) << endl;
    cout << "Area of triangle: " << area(2, 3) << endl;
}