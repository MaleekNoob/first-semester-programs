#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// This function generates a really big prime number
// and returns it to the caller.

bool isPrime(long long int number) {

    // bool isPrime = true;

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int checkDigit(long long int number) {

    int counter = 0;

    while (number > 0) {
        number /= 10;
        counter++;
    }

    return counter;
}

long long int reallyBigPrimeGenerator() {

    srand(time(NULL));
    long long int reallyBigPrime = 2/*1000000000000*/;
    long long int counter = 2;

    while (13 > checkDigit(reallyBigPrime)) {
        if (isPrime(counter)) {
            cout << endl << "Prime number found: " << reallyBigPrime << endl;
            reallyBigPrime = counter;
        }
        counter++;
    }

    return reallyBigPrime;
}

int main() {

    long long int reallyBigPrime = 4910024393567;

    // cout << endl << "Generating a really big prime number...";
    // reallyBigPrime = reallyBigPrimeGenerator();
    // cout << endl << "The really big prime number is: " << reallyBigPrime << endl;
    if (isPrime(321611)) {
        cout << endl << "321611 is a prime number." << endl;
    } else {
        cout << endl << "321611 is not a prime number." << endl;
    }
    return 0;
}