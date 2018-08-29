#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class Student{

    char name[20];
    int marks[10];
    float total;

    public:
        Student(){
            total = 0.0;
        }

        void input(int students, int subjects);
        void classAverage(int students, int subjects);

};

void Student::input(int students, int subjects)
{
    cout << "Enter student details: " << endl;

    for(int i = 0; i < students; i++){
        cout << "Enter student " << i + 1 << " name: " << endl;

        char name[20];
        cin >> name;

        for(int k = 0; k < strlen(name); k++)
            this->name[k] = name[k];

        cout << endl;

        for(int j = 0; j < subjects; j++){
            cout << "Enter subject " << j + 1 << " marks: " << endl;

            int marks;
            cin >> marks;

            this->marks[j] = marks;

            this->total = this->total + (float)marks;
        }

        cout << endl;
    }
}

void Student::classAverage(int subjects, int students){

    float class_total = 0.0, average;

    for(int i = 0; i < students; i++){
        class_total = class_total + this->total;
    }

    average = (class_total/students);

    cout << "Class Average is: " << average << endl;
}

int main()
{
    int students;
    cout << "Enter number of students: " << endl;
    cin >> students;

    int subjects;
    cout << "Enter number of subjects: " << endl;
    cin >> subjects;

    stu.input(students, subjects);
    stu.classAverage(students, subjects);
}
