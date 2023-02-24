#include <iostream>
using namespace std;

int main() {
    int b = 31;
    double a = 21.2;

    //answer mein decrement nahi hu rha hai

    cout << (++a*b--) << endl;
    cout << b << endl;
    cout << (b--%2*3);
    cout << endl << (a+b--%2*3);
    cout << b << endl;

    return 0;
}