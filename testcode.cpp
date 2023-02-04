#include<iostream>
#include<windows.h>
#include<ctime>
using namespace std;

const int height = 20;
const int length = 20;

void set(char array[][length], char);

void plot(char array[][length], int, int, char);

void edit(char array[][length], int, int, int, char);

void inputValidation(int &);

void inputValidation(char &);

void displayFrame(char array[][length]);

bool checkOverlapping(char array[][length], int, int, int, char);

int main()
{
    char alignment, frame[height][length];
    set(frame, '.');
    for(int i = 1; i <= 4; i++)
    {
        for(int j = (5-i); j > 0; j--)
        {
            plot(frame, i, j, alignment);
            system("cls");
        }
        cout << endl;
    }
}

void set(char array[][length], char character)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < length; j++)
        {
            array[i][j] = character;
        }
    }
}

void plot(char array[][length], int size, int count, char alignment)
{
    static int x1, y1;
    displayFrame(array);
    cout << "\nYou have " << count << " ships left of size " << size << "!" << endl;
    cout << "\nWhat should be the alignment of your ship (v/h): ";
    cin >> alignment;
    inputValidation(alignment);
    cout << "\nEnter coordinates in the range of " << length << " (x-axis) and " << height << " (y-axis): ";
    cin >> x1 >> y1;
    inputValidation(x1);
    inputValidation(y1);
    while(!(checkOverlapping(array, x1, y1, size, alignment)))
    {
        cout << "\nError:\nThe ships are overlapping.\nPlease select valid coordinates: ";
        cin >> x1 >> y1;
    }
    edit(array, x1, y1, size, alignment);
}

void edit(char array[][length], int x, int y, int size, char alignment)
{
    if((alignment == 'V') || (alignment == 'v'))
    {
        for(int i = y; i < (y + size); i++)
        {
            array[i][x] = 'A';
        }
    }

    if((alignment == 'H') || (alignment == 'h'))
    {
        for(int i = x; i < (x + size); i++)
        {
            array[y][i] = 'A';
        }
    }
}

void inputValidation(int &num)
{
    while(num < 0)
    {
        cout << "\nPlease enter a positive number: ";
        cin >> num;
    }
}

void inputValidation(char &ch)
{
    while ((ch != 'h') && (ch != 'H') && (ch != 'v') && (ch != 'V'))
    {
        cout << "\nPlease enter valid character: ";
        cin >> ch;
    }
}

void displayFrame(char array[][length])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < length; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkOverlapping(char array[][length], int x, int y, int size, char alignment)
{
    if((alignment == 'V') || (alignment == 'v'))
    {
        for(int i = y; i < (y + size); i++)
        {
            if(array[i][x] == 'A')
                return false;
        }
    }

    if((alignment == 'H') || (alignment == 'h'))
    {
        for(int i = x; i < (x + size); i++)
        {
            if(array[y][i] == 'A')
                return false;
        }
    }

    return true;
}
