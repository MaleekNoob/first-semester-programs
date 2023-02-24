#include <iostream>
using namespace std;

int missingNumber(int array[], int size) {
    static int i;
    if (i < (size - 1)) {
        
        i++;
        missingNumber(array, size);
    }

    return NULL;
}

int main() {

    int N = 5;
    int array[] = {1, 2, 3, 5};

    cout << missingNumber(array, N);

    return 0;
}