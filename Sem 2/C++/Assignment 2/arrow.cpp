#include <iostream>
using namespace std;

class Arrow
{
    int speed;

  public:
    Arrow(int m)
    {
        speed = m;
    }

    void get_speed()
    {
        cout << "Speed: " << speed << endl;
    }

    Arrow *operator->()
    {
        return this;
    }
};

int main()
{
    Arrow a1(20);
    a1.get_speed();
    a1->get_speed();
    return 0;
}
