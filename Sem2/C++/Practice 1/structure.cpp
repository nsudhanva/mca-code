#include <iostream>
using namespace std;

struct emp
{   private:
    int empid;
    char empname[15];
    float salary;
    public:
      void scan(struct emp e[], int n) 
      {
          int i;
          for (i = 0; i < n; i++)
            {
                cout << "Enter " << i + 1 << " the employee id\n";
                cin >> e[i].empid;
                cout << "Enter " << i + 1 << " the employee salary\n";
                cin >> e[i].salary;
                cout << "Enter " << i + 1 << " the employee name\n";
                cin >> e[i].empname;
            }
      }

      void display(struct emp e[], int n)
      {
          int i;
          for (i = 0; i < n; i++)
          {
              cout << "The employee id: " << i + 1 << endl;
              cout << e[i].empid << endl;
              cout << "The employee salary: " << i + 1 << endl;
              cout << e[i].salary << endl;
              cout << "The employee name: " << i + 1 << endl;
              cout << e[i].empname << endl;
          }
    }
};

// void display(struct emp e[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         cout << "The employee id: " << i + 1 << endl;
//         cout << e[i].empid << endl;
//         cout << "The employee salary: " << i + 1 << endl;
//         cout << e[i].salary << endl;
//         cout << "The employee name: " << i + 1 << endl;
//         cout << e[i].empname << endl;
//     }
// }

struct emp e[10];
// struct emp x;
int main()
{
    int i, n;
    cout << "Enter the number of employee\n";
    cin >> n;

        for (i = 0; i < n; i++)
        {
            e[i].scan(e, n);
        }

        for (i = 0; i < n; i++)
        {
            e[i].display(e, n);
        }

        return 0;
}
