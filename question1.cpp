/*
Name: Maleek Hussain Ali
Roll number: 22i-1526
Class: SE-B
*/

#include<iostream>
using namespace std;

void checkMatrix(int, int);

void inputValidation(int&);

int main()
{
    int row1, column1, row2, column2, matrix1[10][10], matrix2[10][10], r = 0, result[10][10];
    cout << "\nEnter rows of first matrix: ";
    cin >> row1;
    inputValidation(row1);
    cout << "\nEnter columns of first matrix: ";
    cin >> column1;
    inputValidation(column1);
    cout << "\nEnter rows of second matrix: ";
    cin >> row2;
    inputValidation(row2);
    cout << "\nEnter columns of second matrix: ";
    cin >> column2;
    inputValidation(column2);
    checkMatrix(column1, row2);

//filling first matrix
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column1; j++)
        {
            cout << "\nEnter value of a" << (i + 1) << "" << (j + 1) << ": ";
            cin >> matrix1[i][j];
        }
    }

//filling second matrix
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < column2; j++)
        {
            cout << "\nEnter value of b" << (i + 1) << "" << (j + 1) << ": ";
            cin >> matrix2[i][j];
        }
    }

//multiplication of matrix
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column2; j++)
        {
            for(int k = 0; k < row2; k++)
            {
                r += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = r;
            r = 0;
        }
    }

    cout << "\nProduct of given two matrices is displayed below: ";
    cout << endl << endl;
//result matrix output
    for(int i = 0; i < row1; i++)
    {
        cout << "|";
        for(int j = 0; j < column2; j++)
        {
            cout << result[i][j];
            if(j != (column2 - 1))
                cout << "\t";
        }
        cout << "|" << endl;
    }

    return 0;
}

void checkMatrix(int row, int column)
{
    if(row != column){
        cout << "\nError!!!!!!!!!!!!!!!!!!";
    exit(0);}
}

void inputValidation(int& rangeOfMatrix)
{
    while(rangeOfMatrix > 10)
    {
        cout << "Please input number less than or equal to 10: ";
        cin >> rangeOfMatrix;
    }
    while(rangeOfMatrix < 1)
    {
        cout << "Please enter value greater than zero: ";
        cin >> rangeOfMatrix;
    }
}
