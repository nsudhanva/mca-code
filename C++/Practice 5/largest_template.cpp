#include<iostream>
using namespace std;

template <class T>

T largest(T a, T b)
{
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int a = 10, b = 34;
    float c = 9.4, d = 2.3;
    char e = 'e', f = 'r';
    cout << "Largest int: " << largest(a, b) << endl;
    cout << "Largest float: " << largest(c, d) << endl;
    cout << "Largest char: " << largest(e, f) << endl;
}