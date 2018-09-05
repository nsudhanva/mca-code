#include <iostream>
using namespace std;

class Electronics
{
  protected:
    int x;

  public:
    Electronics()
    {
        x = 10;
    }
};

class Computers : public Electronics
{
  protected:
    int p;

  public:
    Computers()
    {
        p = 20;
    }
};

class Desktop : public Computers
{
    int a;

  public:
    Desktop()
    {
        a = 30;
    }

    void getData()
    {
        printf("Desktop: %d\n", a);
        printf("Computers: %d\n", p);
    }
};

int main()
{
    Desktop d1;
    d1.getData();
}