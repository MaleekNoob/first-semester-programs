#include <iostream>
using namespace std;

void subarray(int array[], int size, int sum) {
    static int index, funcSum;
    static int start, end;
    if (start == end) {
        funcSum += array[0];
        if (funcSum == sum) {
            cout << endl << start << " and " << end;
            exit(0);
        }
    }
    else {
        // start se le k end waly index ka sum
        for (int i = start; i <= end; i++) {
            funcSum += array[i];
        }
        if (funcSum == sum) {
            cout << endl << start << " and " << end;
            exit(0);
        }
    }
    index++;
    end++;
    if (end == size) {
        cout << "\nNo conclusion";
        exit(0);
    }
    funcSum = 0;
    subarray(array, size, sum);
}

int main() {

    int N = 5, S = 15;
    int array[] = {1, 2, 3, 4, 5};

    subarray(array, N, S);

    return 0;
}