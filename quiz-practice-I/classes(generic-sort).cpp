#include <iostream>
using namespace std;


class sort {
    private:
    int* intArr = new int;
    float* floatArr = new float;
    string* stringArr = new string;

    public: 
    sort() {}
    sort(int* a, float* b, string* c):intArr(a), floatArr(b), stringArr(c) {}
    void sortArray(int size, int type);

};

int main() {

    int n, q;

    cout << "\nEnter size: ";
    cin >> n;
    cout << "\nEnter type: ";
    cin >> q;

    sort element;
    element.sortArray(n , q);

    return 0;
}