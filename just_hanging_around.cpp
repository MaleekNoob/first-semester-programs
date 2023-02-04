#include<iostream>
#include<windows.h>
using namespace std;

void modifyFrame(char matrix[][50], char);

void displayFrame(char matrix[][50]);

void accessColumn(char matrix[][50], int, int, int);

void accessRow(char matrix[][50], int, int, int);

void inputCorrection(char&);

int main()
{
    char orientation, frame[20][50], frame1[20][50];
    int startingRowUnit, startingColumnUnit, shipLength, missileColumn, missileRow;
    modifyFrame(frame, '.');

//Setup (by First User)
    cout << "\n!!Your can plot 5 battle ships!!" << endl;
    for(int i = 0; i < 5; i++)
    {
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
    for(int i = 3; i > 0; i++)
    {
        cout << "\nYou have " << i << " missiles left" << endl;
        modifyFrame(frame1, '0');
        displayFrame(frame1);
        cout << "\nEnter row and column of your target unit: ";
        cin >> missileRow >> missileColumn;
        system("cls");
    }

    return 0;
}

void modifyFrame(char matrix[][50], char matrixUnitCharacter)
{
    //The function modify the frame according to given character

    for(int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            matrix[i][j] = matrixUnitCharacter;
        }
    }
}

void displayFrame(char matrix[][50])
{
    for(int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void accessColumn(char matrix[][50], int units, int startUnitRowNumber, int startUnitColumnNumber)
{
    for(int rowIndex = startUnitRowNumber; rowIndex < (startUnitRowNumber + units); rowIndex++)
    {
        matrix[rowIndex][startUnitColumnNumber] = 'A';
    }
}

void accessRow(char matrix[][50], int units, int startUnitRowNumber, int startUnitColumnNumber)
{
    for(int columnIndex = startUnitColumnNumber; columnIndex < (startUnitColumnNumber + units); columnIndex++)
    {
        matrix[startUnitRowNumber][columnIndex] = 'A';
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
