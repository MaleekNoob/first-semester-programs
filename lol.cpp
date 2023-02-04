/*
Name: Maleek Hussain Ali
Section: 22i-1526
Section: SE-B
*/

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;

const int ROWS = 9, COLUMNS = 16;
const int mouseshape=80;
const int cheeseshape=90;
const int wallshape = -1;
const int boundry = 42;

void print(int maze[][16]);

void runMouse(int maze[][16]);

void transfer(int&, int&);

int main()
{
    int maze[ROWS][COLUMNS]={
                            {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42},
                            {42, 80, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 42},
                            {42, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 42},
                            {42, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 42},
                            {42, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 42},
                            {42, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 42},
                            {42, 90, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 42},
                            {42, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 42},
                            {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42}};

    print(maze);

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

        switch(random)
        {
            case 1:
                current = maze[row][column];
                next = maze[row][column - 1];
                if(next == 90)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        //transfer(current, next);
                        maze[row][column - 1] = current;
                        maze[row][column] =  0;
                        // current = 0;
                        column -= 1;
                    }
                break;

            case 2:
                current = maze[row][column];
                next = maze[row][column + 1];
                if(next == 90)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        //transfer(current, next);
                        maze[row][column + 1] = current;
                        maze[row][column] =  0;
                        // current = 0;
                        column += 1;
                    }
                break;

            case 3:
                current = maze[row][column];
                next = maze[row - 1][column];
                if(next == 90)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        //transfer(current, next);
                        maze[row - 1][column] =  current;
                        maze[row][column] =  0;
                        // current = 0;
                        row -= 1;
                    }
                break;

            case 4:
                current = maze[row][column];
                next = maze[row + 1][column];
                if(next == 90)
                    break;
                else if((next == 42) || (next == -1))
                    continue;
                else
                    {
                        //transfer(current, next);
                        maze[row + 1][column] =  current;
                        maze[row][column] =  0;
                        //current = 0;
                        row += 1;
                    }
                break;

            default:
                cout << "Error!";
                break;
        }
        if(next == 90)
            break;
        print(maze);
        Sleep(1000);
        system("cls");
    }
    
}

void transfer(int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void print(int maze[][16])
{
    for(int rows = 0; rows < ROWS; rows++)
        {
            for(int columns = 0; columns < COLUMNS; columns++)
            {
                cout << maze[rows][columns] << "   ";
            }
            cout << endl;
        }
}
