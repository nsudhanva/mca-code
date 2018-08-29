#include <iostream>
using namespace std;

class Mother
{
  protected:
    int a, b;

    Mother()
    {
        a = 50;
        b = 20;
    }
};

class Father
{
  protected:
    int x, y;

    Father()
    {
        x = 10;
        y = 20;
    }
};

class Son : public Mother, public Father
{
  public:
    void getData()
    {
        cout << "Mother: " << a << " " << b << endl;
        cout << "Father: " << x << " " << y << endl;
    }
};

int main()
{
    Son s1;
    s1.getData();
}