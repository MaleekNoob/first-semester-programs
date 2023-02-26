#include <iostream>
using namespace std;

class A {
    private:
    int a;
    int &cRef = a;

    public:
    A() {
        a = 0;
    }

    A(int &A): a(A) {}

    int getA() {
        return a;
    }

    void setA(int A) {
        a = A;
    }

    void display() {
        cout << "a: " << a << endl;
    }
};

int main() {

    int b = 10;
    A a(b);
    A &aRef = a;
    A* RefPtr = &aRef;
    RefPtr->display();


    return 0;
}