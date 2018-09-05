#include <iostream>
using namespace std;

template <class T>
class Test
{
    T a, b;

  public:
    void get()
    {
        cin >> a >> b;
    }

    T sum();
    // T sum()
    // {
    //     return a + b;
    // }
};

template<class T>

T Test<T>::sum()
{
    return a + b;
}

int main()
{
    Test<int> t1, t2;
    Test<float> tf1, tf2;
    t1.get();
    tf1.get();
    cout << t1.sum() << endl;
    cout << tf1.sum() << endl;
}