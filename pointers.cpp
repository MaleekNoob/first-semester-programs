
#include<iostream>
using namespace std;

int main()
{
    int num = 45;
    int *ptrnum;     //gives starting address
    cout << "\nValue pointed by pointer: " << *ptrnum;
    cout << "\nAddress stored in ptrnum variable: " << ptrnum;
    cout << endl << *(ptrnum+=7);

    return 0;
}