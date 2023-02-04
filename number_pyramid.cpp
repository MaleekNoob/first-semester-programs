#include<iostream>
using namespace std;
int main()
{
    int num, count= 0;
    cout << "\nEnter a number: ";
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        count++;
        for(int j = i; j < num - 1; j++)
        {
            cout << "  ";
        }
        for(int j = i+1; j <= (i + count); j++)
        {
            cout << j << " ";
        }
        if(i > 0)
            for(int j = (i * 2); j >= count; j--)
            {
                cout << j << " ";
            }
        cout << endl;
    }
}