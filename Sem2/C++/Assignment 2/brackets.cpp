#include <iostream>
using namespace std;

class Point
{
    int x, y;

  public:
    Point() {}
    Point(int px, int py)
    {
        x = px;
        y = py;
    }

    void show()
    {
        cout << x << " ";
        cout << y << "\n";
    }

    Point operator+(Point op2);
    Point operator()(int i, int j);
};

Point Point::operator()(int i, int j)
{
    x = i;
    y = j;

    return *this;
}

Point Point::operator+(Point op2)
{
    Point temp;

    temp.x = op2.x + x;
    temp.y = op2.y + y;

    return temp;
}

int main()
{
    Point ob1(10, 20), ob2(1, 1);

    ob1.show();
    ob1(7, 8);
    ob1.show();

    ob1 = ob2 + ob1(10, 10); 
    ob1.show();

    return 0;
}