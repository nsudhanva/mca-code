#include <iostream>
using namespace std;

float convert_to_far(float a)
{
    return ((a * (float(9) / float(5))) + float(32));
}

float convert_to_cel(float a)
{
    return ((a - float(32)) * (float(5) / float(9)));
}

int main()
{
    int choice;
    float cel, far;

    cout << "1. Celcius to Far" << endl;
    cout << "2. Far to Celcius" << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter celcius: " << endl;
            cin >> cel;

            cout << cel << " in far = " << convert_to_far(cel);
            break;
        case 2:
            cout << "Enter far: " << endl;
            cin >> far;

            cout << far << " in cel = " << convert_to_cel(cel);
            break;
        default: cout << "Wrong Option" << endl;
    }
}