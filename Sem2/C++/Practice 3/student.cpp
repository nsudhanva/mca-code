#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class Student{

    public:
        char name[20];
        int marks[10];
        float total;

            Student(){
                total = 0.0;
            }

};

float classAverage(Student stu[], int students){

    float class_total = 0.0, average;

    for(int i = 0; i < students; i++){
        class_total = class_total + stu[i].total;
    }

    average = (class_total/students);

    cout << "Class Average is: " << average << endl;
}

int main()
{
    int students;
    cout << "Enter number of students: " << endl;
    cin >> students;

    Student stu[students];

    int subjects;
    cout << "Enter number of subjects: " << endl;
    cin >> subjects;

    cout << "Enter student details: " << endl;

    for(int i = 0; i < students; i++){
        cout << "Enter student " << i + 1 << " name: " << endl;

        char name[20];
        cin >> name;

        for(int k = 0; k < strlen(name); k++)
            stu[i].name[k] = name[k];

        cout << endl;

        for(int j = 0; j < subjects; j++){
            cout << "Enter subject " << j + 1 << " marks: " << endl;

            int marks;
            cin >> marks;

            stu[i].marks[j] = marks;

            stu[i].total = stu[i].total + (float)marks;
        }

        cout << endl;
    }

    classAverage(stu, students);
}
