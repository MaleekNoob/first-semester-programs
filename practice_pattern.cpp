#include<iostream>
using namespace std;

int main()
{
    int n, index = 0;
    cout << "\nEnter num: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i < n/2)
        {
            if (i == 0)
            {
                cout << '*';
                for (int j = 0; j < n - 1; j++)
                {
                    cout << " ";
                }
                cout << '*';
                cout << endl;
            }
            else
            {
                cout << '*';
                for (int j = 1; j < i; j++)
                {
                    cout << ' ';
                }
                cout << '*';
                for (int j = 1; j < n - (2 * i); j++)
                {
                    cout << ' ';
                }
                cout << '*';
                for (int j = 1; j < i; j++)
                    cout << ' ';
                cout << '*';
                cout << endl;
            }
        }
        else
        {
            index++;
            if (i == (n - 1))
            {
                cout << '*';
                for (int j = 0; j < n - 1; j++)
                {
                    cout << " ";
                }
                cout << '*';
                cout << endl;
            }
            else
            {
                cout << '*';
                for (int j = 1; j < n/2 - index; j++)
                    cout << ' ';
                cout << '*';
                for (int j = 0; j < ((i + 1) - n/2) + (i - n/2); j++)
                    cout << ' ';
                cout << '*';
                for (int j = 1; j < n/2 - index; j++)
                    cout << ' ';
                cout << '*';
                cout << endl;
            }
        }
    }
}