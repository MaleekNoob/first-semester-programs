#include<iostream>
#include<fstream>
using namespace std;

int characterNumber(string);

int wordNumber(string);

int main()
{
    string filename;
    cout << "\nEnter name of your text file: ";
    cin >> filename;
    filename += ".txt";
    fstream file1(filename);
    if(file1.fail())
    {
        cout << "\nConld find the file. ";
        exit(1);
    }
    cout << "\nNumber of characters are " << characterNumber(filename) << " and the total number of words are " << wordNumber(filename);
}

int characterNumber(string fileName)
{
    char letter;
    int count = 0;
    ifstream readfile(fileName);
    while(!readfile.eof())
    {
        readfile.get(letter);
        count++;
    }

    return count;
}

int wordNumber(string fileName)
{
    string subword, word;
    int count = 0;
    ifstream readfile(fileName);
    while(getline(readfile, word, ' '))
    {

        count++;
    }

    return count;
}