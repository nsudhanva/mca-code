#include<iostream>
using namespace std;
template <class T1, class T2>

class Test
{
    T1 a;
    T2 b;

    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout << a << " " << b << endl;
        }
};

int main()
{
    Test<int, char> ob1(4, 'c');
    ob1.display();
}