#include<iostream>
#include<windows.h>
using namespace std;
main()
{
    int num,a;
    cout << "\nEnter number: ";
    cin >> num;
    //num--;
    int i =1,n=0;
    //cout << i;
    //  b=(num+i);
    while(1)
    {
        for(int n=1; n<=num; n++)
        {
        	i=n;
        	for(int j=1; j<=num; j++)
            {
                cout << i;
                if(i==num)
                {
                	cout << endl;
            	    i=1;
            	    continue;
                }
                i++;
                cout << endl;
                if(j==num)
                {
                	cout << "\nlol";
				}
            }
            Sleep(2000);
            system("cls");
		}
    }
}
