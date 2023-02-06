#include <iostream>
using namespace std;

char* storeValue(char* arr) ;

int main() {
    char* array;
    storeValue(array);

    return 0;
}

char* storeValue(char* arr) {
    char permission;
    int iter;
    do
    {
        cout << "\nStoring at index " << iter << ": ";
        cin >> arr[iter];
    } while (permission == 'y');
    
}