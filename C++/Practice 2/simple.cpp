#include<iostream>

using namespace std;

class SI{
    float p, t, r;

    public:
        SI(){
            p = 100;
            t = 20;
            r = 10;
        }

    void compute(){
        float si = p * t * r / 100;
    }
};

int main()
{
    SI si;
    cout << si.compute() << endl;
}