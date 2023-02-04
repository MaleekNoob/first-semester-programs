#include<iostream>
#include<string>
using namespace std;

void reverse(string str);

string *increaseArray(string *array, int &size);

int main()
{
    string sentence;
    cout << "\nEnter a sentence: ";
    getline(cin, sentence);

    reverse(sentence);
    return 0;
}

void reverse(string str)
{
    string temp = "";
    int size = 1, initial = 0, index = 0;
    string *words = new string[size];
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] == ' ') || (i == (str.length() - 1)))
        {
            temp = "";
            for (int j = initial; j <= i; j++)
            {
                temp += str[j];
            }
            initial = i;
            if (index == size)
            {
                words = increaseArray(words, size);
            }
            words[index] = temp;
            index++;
        }
    }

    temp = "";
    for (int i = size - 1; i >= 0; i--)
    {
        if (i == 0)
            temp += " ";
        temp += words[i];
    }

    cout << endl << temp;
}

string *increaseArray(string *array, int &size)
{
    int new_size = size + 1;
    string *newArray = new string[new_size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
    delete [] array;
    size = new_size;
    return newArray;
}