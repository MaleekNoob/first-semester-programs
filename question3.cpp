/*
Name: Maleek Hussain Ali
Section: 22i-1526
Section: SE-B
*/

#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;

void modifyFrame(char matrix[][20], char);

void displayFrame(char matrix[][20]);

void accessColumn(char matrix[][20], int, int, int);

void accessRow(char matrix[][20], int, int, int);

void inputCorrection(char&);

int main()
{
    char orientation, frame[20][20], frame1[20][20];
    int startingRowUnit, startingColumnUnit, shipLength, missileColumn, missileRow;
    modifyFrame(frame, '.');

//Setup (by First User)
    for(int i = 0; i < 5; i++)
    {
        cout << "\nYou have " << (5 - i) << " ships left" << endl;
        displayFrame(frame);

        cout << "\nWhat should be the orientation of you battle ship (v/h): ";
        cin >> orientation;
        inputCorrection(orientation);

        cout << "\nEnter starting unit row and column number: ";
        cin >> startingRowUnit >> startingColumnUnit;

        cout << "\nEnter ship length: ";
        cin >> shipLength;

        if((orientation == 'v') || (orientation == 'V'))
            accessColumn(frame, shipLength, startingRowUnit, startingColumnUnit);
        else if((orientation == 'h') || (orientation == 'H'))
            accessRow(frame, shipLength, startingRowUnit, startingColumnUnit);

        system("cls");
    }

//Game Start (Second User takes control)
    int score = 0;
    modifyFrame(frame1, '0');
    displayFrame(frame1);
    for(int i = 5; i > 0; i--)
    {
        cout << "\nYou have " << i << " missiles left" << endl;
        cout << "\nEnter row and column of your target unit: ";
        cin >> missileRow >> missileColumn;
        if(frame[missileRow][missileColumn] == 'A')
        {
            frame1[missileRow][missileColumn] = 'H';
            score++;
        }
        else
        {
            frame1[missileRow][missileColumn] = 'X';
        }
        
        system("cls");
        displayFrame(frame1);
    }
    cout << "\nYour Final score is: " << score;

    return 0;
}

void modifyFrame(char matrix[][20], char matrixUnitCharacter)
{
    //The function modify the frame according to given character

    for(int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            matrix[i][j] = matrixUnitCharacter;
        }
    }
}

void displayFrame(char matrix[][20])
{
    for(int i = 0; i < 20; i++)
    {
        if(i == 0)
        {
            cout << "    ";
        }
        cout << setw(4) << i;
    }
    cout << endl;
    for(int i = 0; i < 20; i++)
    {
        cout << setw(4) << i;
        for (int j = 0; j < 20; j++)
        {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

void accessColumn(char matrix[][20], int units, int startUnitRowNumber, int startUnitColumnNumber)
{
    for(int rowIndex = startUnitRowNumber; rowIndex < (startUnitRowNumber + units); rowIndex++) 
    {
        matrix[rowIndex][startUnitColumnNumber] = 'A';     //Only row index will change when accessing columns
    }
}

void accessRow(char matrix[][20], int units, int startUnitRowNumber, int startUnitColumnNumber)
{
    for(int columnIndex = startUnitColumnNumber; columnIndex < (startUnitColumnNumber + units); columnIndex++)
    {
        matrix[startUnitRowNumber][columnIndex] = 'A';      //Only column index will change when accessing rows
    }
}

void inputCorrection(char &inputCharacter)
{
    while((inputCharacter != 'v') && (inputCharacter != 'V') && (inputCharacter != 'H') && (inputCharacter != 'h'))
    {
        cout << "\nPlease enter a valid orientation symbol: ";
        cin >> inputCharacter;
    }
}
