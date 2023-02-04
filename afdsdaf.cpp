//Making pac man game
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include "emoji.h"
using namespace std;
using namespace emojicpp;

void display(string array[9][16], int);

#define row 9
#define column 16
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ESC 27

const string character = emojize(":mouse2:");
const string food = "33";

int main()
{
    int userInput = 1, score = 0, current_row = 1, current_column = 1;
    cout << "******WELCOME TO PAC MAN GAME******";
    string grid [row][column]={{"42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42"},
                            {"42", character,  "0",  "0", "-1",  food,  "0",  "0", "-1",  "0", "-1",  "0",  "0",  "0",  "0", "42"},
                            {"42", "-1", "-1",  "0", "-1", "-1", "-1",  "0", "-1",  food, "-1",  "0", "-1", "-1", "-1", "42"},
                            {"42", "-1", "-1",  food, "-1", "-1", "-1",  "0", "-1",  "0", "-1",  "0", "-1", "-1", "-1", "42"},
                            {"42",  "0",  "0",  "0",  "0",  "0", "-1",  "0",  "0",  "0", "-1",  "0",  "0",  "0",  food, "42"},
                            {"42",  "0", "-1", "-1", "-1",  food, "-1",  "0", "-1",  "0", "-1",  "0", "-1", "-1",  "0", "42"},
                            {"42",  "0", "-1", "-1", "-1",  food, "-1",  "0", "-1",  "0", "-1",  "0", "-1", "-1",  "0", "42"},
                            {"42",  "0", "-1", food,  "0",  "0",  "0",  "0", "-1",  "0",  "0",  "0", "-1", "-1",  "0", "42"},
                            {"42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42", "42"}};

    while(1)
    {
        if (userInput != 0)
            display(grid, score);

        switch (userInput = _getch())
            {
            case KEY_UP:
                if (grid[current_row - 1][current_column] == "0")
                {
                    grid[current_row - 1][current_column] = character;
                    grid[current_row][current_column] = "0";
                    current_row--;
                }
                else if (grid[current_row - 1][current_column] == food)
                {
                    grid[current_row - 1][current_column] = character;
                    grid[current_row][current_column] = "0";
                    current_row--;
                    score += 20;
                }
                break;

            case KEY_DOWN:
                if (grid[current_row + 1][current_column] == "0")
                {
                    grid[current_row + 1][current_column] = character;
                    grid[current_row][current_column] = "0";
                    current_row++;
                }
                else if (grid[current_row + 1][current_column] == food)
                {
                    grid[current_row + 1][current_column] = character;
                    grid[current_row][current_column] = "0";
                    current_row++;
                    score += 20;
                }
                break;
            
            case KEY_LEFT:
                if (grid[current_row][current_column - 1] == "0")
                {
                    grid[current_row][current_column - 1] = character;
                    grid[current_row][current_column] = "0";
                    current_column--;
                }
                else if (grid[current_row][current_column - 1] == food)
                {
                    grid[current_row][current_column - 1] = character;
                    grid[current_row][current_column] = "0";
                    current_column--;
                    score += 20;
                }
                break;

            case KEY_RIGHT:
                if (grid[current_row][current_column + 1] == "0")
                {
                    grid[current_row][current_column + 1] = character;
                    grid[current_row][current_column] = "0";
                    current_column++;
                }
                else if (grid[current_row][current_column + 1] == food)
                {
                    grid[current_row][current_column + 1] = character;
                    grid[current_row][current_column] = "0";
                    current_column++;
                    score += 20;
                }
                break;

            case ESC:
                exit(0);
                break;

            default:
                userInput = 0;
                break;
            }

        if (userInput == 0)
            continue;

        system("cls");
    }
}

void display(string array[9][16], int score)
{
    cout << endl << "Score: " << score;
    for (int i = 0; i < row; i++)
    {
        cout << endl << endl;
        for (int j = 0; j < column; j++)
        {
            cout << setw(8) << array[i][j];
        }
    }
}
