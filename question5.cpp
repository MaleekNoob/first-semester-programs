/*
Name: Maleek Hussain Ali
Section: 22i-1526
Section: SE-B
*/

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
using namespace std;

const int ROWS = 9, COLUMNS = 16;

void print(int maze[][16]);

void runMouse(int maze[][16]);

int main()
{
    int maze[ROWS][COLUMNS]={
                            {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42},
                            {42, 55, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 42},
                            {42, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 42},
                            {42, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 42},
                            {42, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 42},
                            {42, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 42},
                            {42, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 42},
                            {42, 0, 0, 33, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 42},
                            {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42}};

    srand(time(NULL));

    runMouse(maze);
    
    cout << "\nCongratulations, you've made it!!";

    return 0;
}

void runMouse(int maze[][16])
{
    int random, current, next, row = 1, column = 1;
    while(1)
    {
        random = rand() % 4 + 1;

        switch(random)   // random variable decide the direction of mouse
        {
            case 1:     //move left
                current = maze[row][column];
                next = maze[row][column - 1];
                if(next == 33)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        maze[row][column - 1] = current;
                        maze[row][column] =  0;
                        column -= 1;
                    }
                break;

            case 2:     //move right
                current = maze[row][column];
                next = maze[row][column + 1];
                if(next == 33)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        maze[row][column + 1] = current;
                        maze[row][column] =  0;
                        column += 1;
                    }
                break;

            case 3:     //move up
                current = maze[row][column];
                next = maze[row - 1][column];
                if(next == 33)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        maze[row - 1][column] =  current;
                        maze[row][column] =  0;
                        row -= 1;
                    }
                break;

            case 4:     //move down
                current = maze[row][column];
                next = maze[row + 1][column];
                if(next == 33)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        maze[row + 1][column] =  current;
                        maze[row][column] =  0;
                        row += 1;
                    }
                break;

            default:
                cout << "Error!";
                break;
        }
        if(next == 33)
            break;
        print(maze);
        Sleep(100);
        system("cls");
    }
    
}

void print(int maze[][16])  //prints the maze
{
    for(int rows = 0; rows < ROWS; rows++)
        {
            for(int columns = 0; columns < COLUMNS; columns++)
            {
                cout << setw(6) << maze[rows][columns];
            }
            cout << endl << endl;
        }
}

