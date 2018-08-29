#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class Student{

    static float total;
    static int count;
    int marks;

    public:

        Student(int marks){
            this->marks = marks;
            total = total + marks;
            count++;
        }

        static void getTotal(){
            cout << "Total: " << total << endl;
            cout << "Avg: " << (total/count) << endl;
        }

};

float Student::total;
int Student::count;

int main()
{
    Student s1(10), s2(20);

    s2.getTotal();

}
