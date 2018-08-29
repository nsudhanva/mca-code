#include <iostream>
using namespace std;

class Integer
{
    int a, b;

    public:
        Integer(int a, int b){
            this->a = a;
            this->b = b;
            cout << "A: " << this->a << endl;
            cout << "B: " << this->b << endl;
        }

        Integer(int a){
            this->a = a;
            cout << "Only A: " << this->a << endl;
        }
};

int main()
{
    Integer intu(10, 20);
    Integer inta(30);
}