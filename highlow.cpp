#include<iostream>
using namespace std;

bool HighLow(int n);

int main()
{
    int num;
    cout << "\nEnter a number: ";
    cin >> num;

    if(HighLow(num))
        cout << "\nTrue";
    else
        cout << "\nFalse";


    return 0;
}

bool HighLow(int n)
{
    int rem, iter = 0, high = 0, low = 0, high1 = 0, low1 = 0;

    while (n > 0)
    {
        rem = n % 10;
        cout << endl << rem;
        n /= 10;

        if(iter % 2 == 0)
        {
            cout << "  &";
            if ((rem > 4) && (rem < 10))
            {
                high++;
                if (!((low == 0) || (high1 == 0)))
                    return false;
            }
            else if ((rem >= 0) && (rem < 5))
            {
                low++;
                if (!((high == 0) || (low1 == 0)))
                    return false;
            }
        }
        else
        {
            cout << "  *";
            if ((rem > 4) && (rem < 10))
            {
                high1++;
                if ((low1 == 0) || (high == 0))
                    return false;
            }
            else if ((rem >= 0) && (rem < 5))
            {
                low1++;
                if (!((high1 == 0) || (low == 0)))
                    return false;
            }
        }



        iter++;
    }

    return true;
}