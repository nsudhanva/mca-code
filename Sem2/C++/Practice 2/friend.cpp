#include <iostream>
using namespace std;

class Number1;
class Number2;

class Number1{

    public:
        int a = 20;
        friend void swap(Number1, Number2);
};

class Number2{

    public:
        int b = 10;
        friend void swap(Number1, Number2);
};

void swap(Number1 *n1, Number2 *n2)
{
    int temp;
    temp = n1->a;
    n1->a = n2->b;
    n2->b = temp;
}

int main()
{
    Number1 n1;
    Number2 n2;

    cout << "Before swapping: a = " << n1.a << ", b = " << n2.b << endl;
    swap(&n1, &n2);
    cout << "After swapping: a = " << n1.a << ", b = " << n2.b << endl;
}