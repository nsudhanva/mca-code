#include<iostream>
using namespace std;

template<class T>
class Student{
    T srn[20];
    T name[20];
    T program[20];

    public:
        void get(){
            cin >> srn >> name >> program;
        }

        T display();
};

template <class T>
T Student<T>::display()
{
    cout << "SRN: " << srn << endl;
    cout << "Name: " << name << endl;
    cout << "Program: " << program << endl;
}

int main()
{
    Student<char> s1;
    s1.get();
    s1.display();
}