#include <iostream>
using namespace std;

class Account {
    private:
    long account_number;
    double balance;
    static int base;

    public:
    Account() {
        this->balance = 0;
        base += 100000;
        account_number = base;
    }

    Account(double balance) {

        if (balance < 0) {
            cout << "Balance cannot be negative" << endl;
            exit(0);
        }

        this->balance = balance;
        base += 100000;
        account_number = base;
    }

    void checkBalance () const {
        cout << "Balance: " << balance << endl;
    }

    void deposit (double amount) {
        if (amount < 0) {
            cout << "Amount cannot be negative" << endl;
            exit(0);
        }

        balance += amount;
    }

    void withdraw (double amount) {
        if (amount < 0) {
            cout << "Amount cannot be negative" << endl;
            exit(0);
        }

        if (amount > balance) {
            cout << "Insufficient balance" << endl;
            exit(0);
        }

        balance -= amount;
    }

    ~Account() {
        cout << "Account " << account_number << " destroyed and transferred to authorized perosn" << endl;
    }

};