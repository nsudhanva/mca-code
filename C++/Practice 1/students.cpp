#include <bits/stdc++.h>

using namespace std;

class Student
{
    char name[20];
    char roll[20];
    int age;

    public:
        void input()
        {
            cin >> name;
            cin >> roll;
            cin >> age;
        }

        void output()
        {
            cout << name << endl;
            cout << roll << endl;
            cout << age << endl;   
        }
};

int main()
{
    Student mca;
    mca.input();
    mca.output();

}