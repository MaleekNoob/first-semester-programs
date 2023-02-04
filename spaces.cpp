#include<iostream>
using namespace std;
int main()
{
    int num, index = 0;
    cout << "\nEnter number: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        if (i < num/2)
        {
            if (i == 0)
            {
                cout << '*';
                for (int j = 0; j < num + 2; j++)
                {
                    cout << " ";
                }
                cout << '*';
                cout << endl;
            }
            else
            {
                cout << '*';
                for (int j = 0; j < i; j++)
                {
                    cout << " ";
                }
                cout << '*';
                for(int j = 0; j < num - (2 * i); j++)
                {
                    cout << ' ';
                }
                cout << '*';
                for(int j = 0; j < i; j++)
                {
                    cout << ' ';
                }
                cout << '*';
                cout << endl;
            }
        }
        else
        {
            if (i == num - 1)
            {
                cout << '*';
                for (int j = 0; j < num + 2; j++)
                {
                    cout << " ";
                }
                cout << '*';
                cout << endl;
            }
            else
            {
                index++;
                cout << '*';
                for (int j = 0; j < (num/2 - (index + 1)) + 1; j++)
                {
                    cout << " ";
                }
                cout << '*';
                for (int j = 0; j < (i*2 - num) + 2; j++)
                {
                    cout << " ";
                }
                cout << '*';
                for (int j = 0; j < (num/2 - (index + 1)); j++)
                {
                    cout << " ";
                }
                cout << '*';
                cout << endl;
            }
        }
    }
}