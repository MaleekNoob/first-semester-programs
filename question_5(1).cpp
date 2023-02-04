#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int x,n,max=0, min=0;
    cout << "\nEnter value of x: ";
    cin >> x;
    cout << "\nEnter value of n: ";
    cin >> n;
    n = -x;
    cout << endl << n << endl;
    for(int i = n; i <= x; i++)
    {
        if((pow(x, n)-pow(x, n-1)) > max)
        {
            max = (pow(x, n)-pow(x, n-1));
        }
        if((pow(x, n)-pow(x, n-1)) < min)
        {
            min = (pow(x, n)-pow(x, n-1));
        }
    }
    for(int j=max; j>=min; j--)
    {
        cout << setw(4) << j;
        for(int i = n; i <= x; i++)
        {
            if(j == (pow(i, n)-pow(i, n-1)))
            {
                cout << setw(4) << '.';
            }
            else
            {
                cout << setw(4) << ' ';
            }
        }
        cout << endl;
    }
    cout << endl << setw(4) << " ";
    for(int i = -(x); i <= x; i++)
    {
        cout << setw(4) << i;
    }
}