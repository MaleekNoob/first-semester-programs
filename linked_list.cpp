#include<iostream>
using namespace std;

void integer (int *, int);

void floating_point (float *, int);

void character (char *, int);

int main()
{   
    int again, int_size = 1, char_size = 1, float_size = 1;
    int *num = new int[int_size];
    char type;
    char *ch = new char[char_size];
    float *fl = new float[float_size];

    do
    {
        cout << "\nWhat do you want to enter (char: c, int: i, float: f): ";
        cin >> type;

        switch (type)
        {
            case 'c':
                character (ch, char_size);
                break;
            case 'i':
                integer (num, int_size);
                break;
            case 'f':
                floating_point (fl, float_size);
                break;
            default:
                cout << "Error";
                break;
        }

        cout << "\nMore? ";
        cin >> again;
    } while (again);
    
}

void integer (int *num, int size)
{
    char ch;
    cout << "\nEnter your character: ";
    cin >> ch;

}