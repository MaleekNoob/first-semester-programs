#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int array[], int size, int low, int high) {
    int pivot = array[low];

    while (low < high) {
        do
        {
            low++;
        } while (array[low] <= pivot);

        do
        {
            high--;
        } while (array[high] >= pivot);
        
        if (array[low] > array[high]) {
            swap(array[low], array[high]);
        }
    }

    return high;
}

void quickSort(int array[], int size, int low, int high) {

}

int main() {
    int array[] = {10, 4, 6, 7, 12, 16, 8, 11, 15, -9, 22};
    int length = sizeof(array)/sizeof(array[0]), low = array[0], high = array[length - 1];
    quickSort(array, length, low, high);

    return 0;
}