#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int m, n, o;
    cout << "Enter m: ";
    cin >> m;
    cout << endl << "Enter n: ";
    cin >> n;
    cout << endl << "Enter o: ";
    cin >> o;

    int* arr = new int[m * n * o];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < o; k++) {
                cout << "\nValue of array[" << i << "][" << j << "][" << k << "]: ";
                cin >> *(arr + ((k + (j * o)) + (i * (n * o))));
                cout << endl << "arr + " << ((k + (j * o)) + (i * (n * o)));
            }
        }
    }

    cout << "\nThe output is: ";
    for (int k = 0; k < m*n*o; k++) {
        cout << endl << "\nThe value of array is: " << arr[k];
    }


    return 0;
}