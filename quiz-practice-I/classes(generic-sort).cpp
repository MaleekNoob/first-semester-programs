#include <iostream>
using namespace std;


class sort {

    public: 
    sort() {}
    void sortArray(int size, int type);

};

void sort::sortArray(int size, int type) {
    switch (type)
    {
    case 1:
        int* arr = new int[size];
        break;

    case 2:
        float* arr = new float[size];
        break;

    case 3:
        string* arr = new string[size];
        break;
    
    default:
        break;
    }
    for (int i = 0; i < size; i++) {
        // cin >> arr;
    }
}

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