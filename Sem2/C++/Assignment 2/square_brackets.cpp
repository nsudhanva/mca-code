#include <iostream>

using namespace std;

class Marks
{
    int subjects[3];

  public:
    Marks(int sub1, int sub2, int sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }

    int operator[](int position)
    {
        return subjects[position];
    }
};

int main()
{
    Marks m1(10, 20, 30);

    cout << m1[0] << endl;
    cout << m1[1] << endl;
    cout << m1[2] << endl;
    return 0;
}