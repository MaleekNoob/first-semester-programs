#include <iostream>
using namespace std;

class pattern {
    
private:
    int userNumber;

    void printAscendingLine(int num) {

        if (num > 0) {
            printAscendingLine(num - 1);
            cout << "  " << num;
        }

    }

    void printDesendingLine(int num) {

        if (num > 0) {
            cout << "  " << num;
            printDesendingLine(num - 1);
        }

    }

    void printStericLine(int num) {

        if (num > 0) {
            cout << " *";
            printStericLine(num - 1);
        }

    }


public:
    pattern() {
        userNumber = 0;
    }

    pattern(int num) {
        userNumber = num;
    }

    void ascendingNumberPattern(int num) {

        if (num > 0) {
            printAscendingLine(num);
            cout << endl;
            ascendingNumberPattern(num - 1);
        }

    }

    void desendingNumberPattern(int num) {

        if (num > 0) {
            printDesendingLine(num);
            cout << endl;
            desendingNumberPattern(num - 1);
        }

    }

    void printPlainPattern(int num) {

        if (num > 0) {
            printStericLine(num);
            cout << endl;
            printPlainPattern(num - 1);
        }

    }

};

int main() {

    pattern p1;
    int number;
    char yesOrNo;
    cout << "\nDo you want to some patterns da? ";
    cin >> yesOrNo;

    if (yesOrNo == 'y') {
        cout << "\nEnter number: ";
        cin >> number;
        p1 = pattern(number);
        p1.printPlainPattern(number);
    }

    return 0;
}