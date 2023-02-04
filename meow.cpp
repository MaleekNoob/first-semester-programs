#include<iostream>
using namespace std;

string substring(int, int, string);

int find(string, string);

string replace(string, string, int, int);

string invert(string);

int main()
{
    string text;
    int index;
    cout << "\nEnter your text: ";
    getline(cin, text);

    string new_string = substring(3, 7, text);

    index = find("is", "teri shadi cancel.");

    string new_string1 = replace("male", "My name is Maleek, what's yours?", 11, 16);

    string new_string2 = invert("Albania");

    cout << index << endl << new_string << endl << new_string1 << endl << new_string2;

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

    return 0;
}

string replace(string pattern, string text, int start, int end)
{
   for(int i = start; i <= end; i++)
   {
       text[i] = pattern[i - start];
   }

    return text;
}

string invert(string text)
{
    string revert;
    for(int i = 0; i < text.length(); i++)
    {
        revert[i] = text[(text.length() - 1) - i];
    }

    return revert;
}
