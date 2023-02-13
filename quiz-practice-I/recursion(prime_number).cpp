#include <iostream>
using namespace std;

bool primeNumber(int n) {
    static int i;
    if (n == 1) {
        return false;
    }
    else {
        if (i == 0) {
            i = 1;
        }
        i++;
        if (n % i == 0) {
            if (i == n) {
                return true;
            }
            else {
                return false;
            }
        }
    }
}

int main() {
    
    // code for prime number
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    cout << endl << primeNumber(num);

    return 0;
}