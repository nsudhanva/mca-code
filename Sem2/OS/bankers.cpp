#include <iostream>
using namespace std;

#define PRO 5
#define RES 3

void create_need_matrix(int need_matrix[PRO][RES], int max[PRO][RES], int allocation[PRO][RES])
{
    cout << "Need Matrix: " << endl;

    for (int i = 0; i < PRO; i++)
    {
        for (int j = 0; j < RES; j++)
        {
            need_matrix[i][j] = max[i][j] - allocation[i][j];
            cout << need_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

bool bankers(int processes[], int available[], int max[][RES], int allocation[][RES])
{
    int need_matrix[PRO][RES], sequence[PRO], work[RES];

    create_need_matrix(need_matrix, max, allocation);

    bool final_bool[PRO] = {0};

    for (int i = 0; i < RES; i++)
        work[i] = available[i];

    int count = 0;

    while (count < PRO)
    {
        bool safe = false;
        for (int i = 0; i < PRO; i++)
        {
            if (final_bool[i] == 0)
            {
                int j;
                for (j = 0; j < RES; j++)
                    if (need_matrix[i][j] > work[j])
                        break;

                if (j == RES)
                {
                    for (int k = 0; k < RES; k++)
                        work[k] += allocation[i][k];

                    sequence[count++] = i;

                    final_bool[i] = 1;

                    safe = true;
                }
            }
        }

        if (safe == false)
        {
            cout << "Program is not in safe state";
            return false;
        }
    }

    cout << "Program is in safe state.." << endl;
    cout << "Safe sequence is: ";

    for (int i = 0; i < PRO; i++)
        cout << sequence[i] << " ";

    return true;
}
    
int main()
{
    int processes[PRO], allocation[PRO][RES], max[PRO][RES], available[PRO];

    cout << "Enter processes sequence: " << endl;

    for (int i = 0; i < PRO; i++)
    {
        cin >> processes[i];
    }

    cout << "Enter allocation matrix: " << endl;

    for (int i = 0; i < PRO; i++)
    {
        for (int j = 0; j < RES; j++)
        {
            cin >> allocation[i][j];
        }
    }

    cout << "Enter max matrix: " << endl;

    for (int i = 0; i < PRO; i++)
    {
        for (int j = 0; j < RES; j++)
        {
            cin >> max[i][j];
        }
    }

    cout << "Enter available sequence: " << endl;

    for (int i = 0; i < RES; i++)
    {
        cin >> available[i];
    }

    bankers(processes, available, max, allocation);

    return 0;
}  