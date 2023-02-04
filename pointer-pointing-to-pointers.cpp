#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "\nEnter pointer to pointer array size: ";
    cin >> size;
    int separateSize;
    int** ptr = new int*[size];
    for (int i = 0; i < size; i++) {
        cout << "\nEnter dynamic array pointer: ";
        cin >> separateSize;
        ptr[i] = new int[separateSize];
    }

    return 0;
}