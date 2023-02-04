#include <iostream>
#include <string>
using namespace std;
class student
{
    private:
    int age, salary;
    string cnic, name;
    
    public:
    void askDetails()
    {
        cout << "\nEnter your name: ";
        cin >> name;
        cout << "\nEnter CNIC: ";
        cin >> cnic;
        cout << "\nEnter age: ";
        cin >> age;
        cout << "\nEnter salary: ";
        cin >> salary;
    }

    void prompt()
    {
        cout << "\nHi " << name << "!";
        cout << "\nYour salary is " << salary;
    }
};

int main()
{
    cout << "\nWelcome to OOP course.";
    student se[10];
    for(int i = 0; i < 10; i++)
    {
        cout << "\n--------Enter detail of student number 22i-152" << i << ":";
        se[i].askDetails();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << "\n--------Detail of student number 22i-152" << i << ":";
        se[i].prompt();
    }

    return 0;
}
