#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

float calcGpa(float &);

int main()
{
    cout <<  "\n Welcome to database system";
    
    do
    {
        cout << "\nEnter the name of Student: ";
        cin >> name;
        cout << "\nEnter roll number: ";
        cin >> roll_num;
        cout << "\nEnter derpartment: ";
        cin >> department;
        gpa = calcGpa(gpa);

    }
}

float calcGpa(float &)
{
    srand(time(NULL));
}