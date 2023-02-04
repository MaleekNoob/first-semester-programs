#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int equation(int, int);

int validation(int);

int check(int, int, int);

int main()
{
    int space=2, n, x, max_value, actual_value;
    cout << "\nn= ";
    cin >> n;
    n = validation(n);
    cout << "\nx= ";
    cin >> x;
    int base = ((4 * x) + 3);
    max_value = equation(x, n);
    for(int i = x; i > 0; i--)
    {
        actual_value = equation(i, n);
        //check(max_value, base, actual_value);
        for(int k=max_value; k >= 0; k--)
	    {
	    	if(actual_value == k)
		    {
		    	/*if(actual_value == 0)
		    	{
		    		cout << setw((2*x)+4) << '.';
				}*/
			    cout << k << setw(1+space) << '.' << setw((base - (2*space))+1) << '.' << endl;
			    space+=2;
			    max_value = (k-1);
			    break;
			//return k;
		    }
		    else
		    {
			    cout << k << endl;
		    }
	    }  
    }
    for(int i = -x; i<=x; i=1+i)
    {
    	//cout << endl;
    	if(i == -x)
    	{
    		cout<< "  " ;
		}
		cout << setw(2) << i;
		//Sleep(1000);
	}
}

int equation(int i, int n)
{
    int value;
    value = (pow(i, n) - pow(i, (n-1)));
    return value;
}

int check(int max, int base, int actual)
{
	
}


int validation(int a)
{
    while(a<0)
    {
        cout << "\nPlease enter positive number: ";
        cin >> a;
    }
    return a;
}
