#include <iostream>
using namespace std;

class Husband{
    float salary = 10000;
    friend class Auditor;

};

class Wife{
    float salary = 20000;
    friend class Auditor;
};

class Auditor
{
    Wife w1;
    Husband h1;

    public:
    void putData(){
        cout << "husband: " << h1.salary << endl;
        cout << "wife: " << w1.salary << endl;
    }
};

int main()
{
    Auditor a1;
    a1.putData();
}