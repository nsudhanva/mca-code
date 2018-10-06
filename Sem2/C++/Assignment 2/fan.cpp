#include <iostream>
using namespace std;

class Fan
{
    int speed;

  public:
    Fan()
    {
        speed = 0;
        cout << "Fan turned on.." << endl;
    }

    void operator++()
    {
        if (speed == 5)
        {
            speed = 0;
        }
        else
        {
            speed = speed + 1;
        }
    }

    void operator--()
    {
        if (speed == 0)
        {
            speed = 5;
        }
        else
        {
            speed = speed - 1;
        }
    }

    void get_speed()
    {
        cout << "Speed: " << speed << endl;
    }
};

int main()
{
    Fan f1;
    int choice;

    while (1)
    {
        cout << "What do you want to do? " << endl;
        cout << "1. Increase fan speed" << endl;
        cout << "2. Decrease fan speed" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            ++f1;
            f1.get_speed();
            break;
        case 2:
            --f1;
            f1.get_speed();
            break;
        default:
            cout << "Fan turned off" << endl;
        }
    }
}