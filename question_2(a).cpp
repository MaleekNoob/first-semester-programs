#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int num, n=1, i=0, r=1, o=0, j=1;
    string structure = "";
    cout << "\nEnter a number: ";
    cin >> num;
    while(i<(num + (num - 1)))
    {
        if(i<num)
        {
            if(o<=i)
            {
                structure += '*';
                cout << structure;
                o++;
            }
            if(n<num)
            {
                if(n%2 == 0)
                {
                    cout << '.';
                }
                else
                {
                    cout << '_';
                }
                n++;
                continue;
            }
            cout << endl;
            i++;
            n=i+1;
        }
        else
        {
            if(r<=(i-(num-1)))
            {
                structure.pop_back();
                cout << structure;
                r++;
            }
            
            if(j>(i-num))
            {
                if(j%2 == 0)
                {
                    cout << '.';
                }
                else
                {
                    cout << '_';
                }
                j++;
                continue;
            }
            cout << endl;
            i++;
            j=(num-i)+1;
        }
    }
    return 0;
}
