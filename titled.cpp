/*
Name: Maleek Hussain Ali
Roll number: 22i-1526
Section: SE(B)
*/

#include<iostream>
using namespace std;

int even_or_odd(int);  //checks weather the function is even or odd

int validation(int);

main()
{
    int num,a=3,e,ja,z;
    char ch;
    cout << "\nEnter a number: ";
    cin >> num;
    validation(num);
    if(num % 2 == 0)   //conditional statements if input number is even
    {
        e=2;
        ja = num + 1;
        z=-1;
    }
    else       //conditional statements if input number is odd
    {
        e=1;
        ja = num;
        z=0;
    }
    for(int i = 1; i<num; i++)    //control number of rows
    {
        for(int n=0; n<((num/2)-i); n++)     //Controls upper left section for printing '.'
        {
            cout << ".";
        }
        if(a<=num)       //prints '*'
        {
            for(int j=1;j<=a;j++)
            {
                cout << "*";
            }
            a+=2;
        }
        for(int n=0; n<((num/2)-i); n++)        //Controls upper right section for printing '.'
        {
            cout << ".";
        }
        cout << endl;
        if(a>num)
        {
            break;
        }  
    }
    for (int i=0; i<e; i++)    //Contorl Mid-Section of circle
    {
        //cout << ch;
        for(int j=0; j<ja; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int k = 0; k<num; k++)
    {
        for(int n=k; n>z; n--)     //Controls lower left section for printing '.'
        {
            cout << ".";
        }
        if(a>3)
        {
            for(int j=a;j>=3;j--)      //prints '*'
            {
                cout << "*";
            }
            a-=2;
        }
        for(int n=k; n>z; n--)       //Controls lower right section for printing '.'
        {
            cout << ".";
        }
        cout << endl;
        if(a<=3)
        {
            break;
        }
    }
    return 0;
}

int validation(int number)
{
    while(number < 0)
    {
        cout << "\nEnter a positive number please: ";
        cin >> number;
        return number;
    }
    return 0;
}

int even_or_odd(int number)
{
    if(number % 2 == 0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
    return 0;
}
