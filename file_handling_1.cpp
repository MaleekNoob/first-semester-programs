#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int checkFile(string, ofstream &);

void displayContent(fstream &);

void showStatus(fstream &);

int main()
{
    ofstream outfile;
    fstream myfile;
    string str, filename;
    char letter;
    int n = 0;

    cout << "\nEnter file name: ";
    cin >> filename;
    filename += ".txt";

    myfile.open("myfile.txt");

    if(!myfile)
    {
        exit(1);
    }

    if(checkFile(filename, outfile))
    {
        cout << "\nFile not opened!";
    }
    else
    {
        while(!myfile.eof())
        {
            myfile.get(letter);
            outfile.put(tolower(letter));
            cout << "\nConversion done baby!";
        }
    }
    myfile.close();

    return 0;
}

int checkFile(string name, ofstream &filee)
{
    filee.open(name.c_str());
    if(filee.fail())
    {
        return 1;
    }
    return 0;
}

void displayContent(fstream &filee)
{
    string word;
    while(!filee.eof())
    {
        for(int i = 0; i < 4; i++)
        {
            filee >> word;
            cout << word << " ";
        }
        cout << endl;
    }
}

void showStatus(fstream &filee)
{
    cout << "\neof bit: " << filee.eof();
    cout << "\nbad bit: " << filee.bad();
    cout << "\ngood bit: " << filee.good();
    cout << "\nfail bit: " << filee.fail();
    filee.clear();
}