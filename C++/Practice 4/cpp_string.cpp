#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    char name[20];
    float fees;
    float discount_fees;

  public:
    Student(float discount_fees)
    {
        this->discount_fees = discount_fees;

        cout << "Discount Fees: " << this->discount_fees << endl;
    }

    Student(char name[], float fees)
    {
        for(int i = 0; i < strlen(name); i++)
            this->name[i] = name[i];
        this->fees = fees;

        cout << "Name: " << this->name << endl;
        cout << "Fees: " << this->fees << endl;

        Student(30);
    }
};

int main()
{
    char name[] = "Shreedhar";
    Student student(name, 200);
}