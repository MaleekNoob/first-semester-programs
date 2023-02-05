/*
TODO: make your very own strlen().
*/

#include <iostream>
#include  <bits/stdc++.h>
using namespace std;

void replaceCharacterArray(char** arr1, char** arr2);

int sizeOf(char* array);

int main() {

    // Code to replace a string.
    /*
    step 1: User will enter two character arrays (size: 20).
    step 2: Make function "void replaceCharacterArrays(char* arr1, char* arr2)" that will replace both character arrays.
    step 3: display both strings.

    */
    int size = 20;
    char* arr1 = new char[size];
    char* arr2 = new char[size];
    cout << "\nEnter first string: ";
    cin.getline(arr1, size);
    cout << "\nEnter second string: ";
    cin.getline(arr2, size);
    replaceCharacterArray(&arr1, &arr2);
    cout << endl << "Size of array 1 is " << sizeOf(arr1);
    return 0;
}

void replaceCharacterArray(char** arr1, char** arr2) {
    char** temp;
    temp = arr1;
    arr1 = arr2;
    arr2 = temp;

    cout << "\nInside the function:\nValue of first character array: " << *arr1;
    cout << "\nValue of second character array: " << *arr2;
}

int sizeOf(char* array) {
    
}
