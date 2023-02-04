#include <iostream>
#include <conio.h>
using namespace std;

class converter {
    public:
        float inputGBP(float pound);
        float inputCNY(float yuan);
        float inputPKR(float rupee);
        float outputGBP(float dollar);
        float outputCNY(float dollar);
        float outputPKR(float dollar);
};

float converter::inputPKR(float rupee) {
    return (rupee / 250.55);
}

float converter::inputCNY(float yuan) {
    return (yuan / 6.78);
}

float converter::inputGBP(float pound) {
    return (pound / 0.81);
}

float converter::outputGBP(float dollar) {
    return (0.81 * dollar);
}

float converter::outputCNY(float dollar) {
    return (6.78 * dollar);
}

float converter::outputPKR(float dollar) {
    return (250.55 * dollar);
}

void validation(int &value) {
    while (!((value > 0) && (value < 5))) {
        cout << "\nPlease enter valid option: ";
        cin >> value;
    }
}

void validation(double &value) {
    while (value < 0) {
        cout << "\nPlease enter positive amount: ";
        cin >> value;
    }
}

int main() {
    converter obj;
    int choiceFrom, choiceTo;
    double amount, dollar;
    char user;
    do {
        cout << "\n--------------------------------------------------CURRENCY CONVERTER--------------------------------------------------";
        cout << "\nEnter currency to be converter from(pound 1: dollar 2:  yuan 3: rupee 4): ";
        cin >> choiceFrom;
        validation(choiceFrom);
        cout << "\nEnter amount: ";
        cin >> amount;
        validation(amount);
        switch (choiceFrom)
        {
        case 1:
            dollar = obj.inputGBP(amount);
            break;
        
        case 2:
            dollar = amount;
            break;

        case 3:
            dollar = obj.inputCNY(amount);
            break;

        case 4:
            dollar = obj.inputPKR(amount);
            break;

        default:
            cout << "\nError!";
            break;
        }

        cout << "\nChanged to (pound 1: dollar 2:  yuan 3: rupee 4): ";
        cin >> choiceTo;
        validation(choiceTo);
        switch (choiceTo)
        {
        case 1:
            cout << "\nThe amount in pounds is " << obj.outputGBP(dollar);
            break;

        case 2:
            cout << "\nThe amount in dollars is: " << dollar;
            break;
        
        case 3:
            cout << "\nThe amount in yuan is: " << obj.outputCNY(dollar);
            break;

        case 4:
            cout << "\nThe amount in rupee is: " << obj.outputPKR(dollar);
            break;

        default:
            cout << "\nError!";
            break;
        }

        cout << "\ncout << \"wanna do this again (Y/N)?\" ";
        cin >> user;

    } while ((user == 'y') || (user == 'Y'));
    return 0;
}