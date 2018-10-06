#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    float fees;
    float discount_fees;

  public:
    Student(float discount_fees)
    {
        this->discount_fees = discount_fees;

        cout << "Discount Fees: " << this->discount_fees << endl; 
    }

    Student(string name, float fees)
    {
        this->name = name;
        this->fees = fees;

        cout << "Name: " << this->name << endl;
        cout << "Fees: " << this->fees << endl;

        Student(30);
    }
};

int main()
{
    Student student("Shreedhar", 200);
}