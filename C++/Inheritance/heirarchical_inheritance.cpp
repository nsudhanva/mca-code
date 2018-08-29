#include <iostream>
using namespace std;

class Furniture
{
  public:
    int a, b;

    Furniture()
    {
        a = 10;
        b = 20;
    }

    void getData()
    {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
    }
};

class Chair : public Furniture
{
  public:
    int x, y;

    Chair()
    {
        x = 50;
        y = 60;
    }
};

class Table : public Furniture
{
  public:
    int p, q;

    Table()
    {
        p = 70;
        q = 60;
    }
};

int main()
{
    Chair c1;
    Table t1;
    Furniture f1;

    cout << "Chair: " << c1.x <<  ", " << c1.y << endl;
    cout << "Table: " << t1.p << ", "  << t1.q << endl;
    cout << "Furniture with Chair: " << c1.a << endl;
    cout << "Furniture with Table: " << t1.b << endl;
    cout << "Furniture with Furniture: " << endl;
    f1.getData();
}