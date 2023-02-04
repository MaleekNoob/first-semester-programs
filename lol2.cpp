#include<iostream>
#include<iomanip>
using namespace std;

int addition(int, int);

int difference(int, int);

int remainder(int, int);

int division(int, int);

int product(int, int);

int main()
{
    int num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "\nEnter second number: ";
    cin >> num2;
    cout << "\nEnter operation: ";
    cin >> op;
    switch(op)
    {
        case '+':
        cout << addition(num1, num2);
        break;
        case '-':
        cout << difference(num1, num2);
        break;
        case '*':
        cout << product(num1, num2);
        break;
        case '/':
        cout << division(num1, num2);
        break;
        case '%':
        cout << remainder(num1, num2);
        break;
        default:
        cout << "\nInvalid";
        break;
    }
    return 0;
}

int addition(int a, int b)
{
    for(int i = 0; i<b; i++)
    {
        a++;
    }
    return a;
}

int difference(int a, int b)
{
    //int n;
    for(int i = 0; i<b; i++)
    {
        a--;
    }
    return a;
}

int product(int a, int b)
{
    int n=0;
    for(int i = 0; i<b; i++)
    {
        for (int j=0; j<a; j++)
        {
            n++;
        }
    }
    return n;
}

int division(int a, int b)
{
    int n=0;
    if(b==0)
    {
        cout << "\nUndefined";
        exit(0);
    }
    while(a>=b)
    {
        for(int i=0; i<b; i++)
        {
            a--;
        }
        n++;
    }
    return n;
}

int remainder(int a, int b)
{
    while(a>=b)
    {
        for(int i=0; i<b; i++)
        {
            a--;
        }
    }
    return a;
}
