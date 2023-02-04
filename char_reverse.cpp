#include<iostream>
using namespace std;

string reverse_string(char *array, int size);

int main()
{
    int size = 50;
    char *sentence = new char[size];
    cout << "\nEnter name: ";
    cin.getline(sentence, size);
    cout << "\nThe reversed string is: " << reverse_string(sentence, size);
    return 0;
}

string reverse_string(char *array, int size)
{
    string temp = "";
    int index = size;
    for (int i = (size - 1); i >= 0; i--)
    {
        if (array[i] == ' ' || i == 0)
        {
            for (int j = i; j <= index; j++)
            {
                temp += array[j];
            }
            index = i;
        }
    }

    return temp;
}