/*
Name: Maleek Hussain Ali
Section: 22i-1526
Section: SE-B
*/

#include<iostream>
#include<cstring>
using namespace std;

string substring(int, int, string);

int find(string, string);

string replace(string, string, int, int);

string invert(string);

void error_check(string&);

void error_check(int&);

int main()
{
    string text, pattern, new_string, new_string1, new_string2;
    int index, start, end;

    cout << "\nEnter your text: ";
    getline(cin, text);
    error_check(text);
    cout << "\nStarting index for substring: ";
    cin >> start;
    error_check(start);
    cout << "\nEnding index for substring: ";
    cin >> end;
    error_check(end);
    new_string = substring(start, end, text);
    cout << "\nSub String is " << new_string;

    cout << "\nEnter anything from given text to find it's index location: ";
    cin >> pattern;
    error_check(pattern);
    index = find(pattern, text);
    if(index == -1)
        cout << "\nGiven text not found!!";
    else
        cout << "\nIndex location is" << index;

    cout << "\nEnter text to be replaced from above text: ";
    cin >> pattern;
    error_check(pattern);
    cout << "\nEnter starting index: ";
    cin >> start;
    error_check(start);
    cout << "\nEnter ending index: ";
    cin >> end;
    error_check(end);
    new_string1 = replace(pattern, text, start, end);
    cout << "\nReplaced text is " << new_string1;

    new_string2 = invert(text);
    cout << "\nInverted text is: " << new_string2;

    return 0;
}

string substring(int start, int end, string text)
{
    string selected = "";
    for(int i = start; i < end; i++)
    {
        selected += text[i];
    }

    return selected;
}

int find(string pattern, string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        for(int j = 0; j < pattern.length(); j++)
        {
            if(text[j+i] != pattern[j])
            {
                break;
            }
            if(j == (pattern.length() - 1))
            {
                return i;
            }
        }
    }

    return -1;
}

string replace(string pattern, string text, int start, int end)
{
    string toReturn = "";
   for(int i = 0; i < start; i++)
   {
       toReturn += text[i];
   }
   for(int i = 0; i < pattern.length(); i++)
   {
        toReturn += pattern[i];
   }
   for(int i = end; i < text.length(); i++)
   {
        toReturn += text[i];
   }

    return toReturn;
}

string invert(string inputString)
{
    string toReturn = "";
    for(int i = (inputString.length() - 1); i >= 0; i--)
    {
        toReturn += inputString[i];
    }

    return toReturn;
}

void error_check(string& str)
{
    while(str == "")
    {
        cout << "\nPlease enter string: ";
        cin >> str;
    }
}

void error_check(int& num)
{
    while(num < 0)
    {
        cout << "\nEnter a positive number: ";
        cin >> num;
    }
}
