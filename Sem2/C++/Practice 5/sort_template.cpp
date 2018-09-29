#include <iostream>
using namespace std;

template <class sort>

sort bubble_sort(sort array[], int n)
{
    int i, j;
    sort temp;

    cout << "Before sorting: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "After sorting: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

int main()
{
    int numbers[] = {1, 5, 2, 1, 4};
    float reals[] = {1.3, 5.4, 2.1, 1.7, 4.3};
    bubble_sort(numbers, 5);
    bubble_sort(reals, 5);
}