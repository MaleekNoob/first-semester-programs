#include <iostream>
#include <conio.h>
using namespace std;

void input(string &str) {
    string mainStr;
    char character;

    do
    {
        if (static_cast<int>(character) != 8) {
            mainStr += character;
        }

        character = getche();

        if (static_cast<int>(character) == 8) {
                mainStr.pop_back();
        }
    } while (static_cast<int>(character) != 13);
    

    str = mainStr;
}

struct employee {
    int salary;
    string name;
    int employeeId;

};

struct boss {
    long revenue;
    string name;
    string companyName;

} boss1;

int main() {

    employee *ptr1, person;
    boss *ptr2;

    cout << "\nEnter employee's name: ";
    input(person.name);
    cout << "\nEnter boss company name: ";
    input(boss1.companyName);
    cout << "\nEmployee name: " << person.name;
    cout << "\nBoss company name: " << boss1.companyName;

    return 0;
}