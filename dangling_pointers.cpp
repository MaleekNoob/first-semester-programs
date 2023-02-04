#include <iostream>
using namespace std;

int main() {
    int *p, *q;
    p = new int;
    q = new int;
    *p = 99;
    q = p;
    *q = 88;
    delete q;
    q = NULL; 
    cout << *p << " : " << *q;
    return 0;
}