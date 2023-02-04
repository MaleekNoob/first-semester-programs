#include <iostream>
#include <string>
using namespace std;

string reverse(string sentence);

int main()
{
    string str;
    cout << "\nEnter your sentence: ";
    getline(cin, str);
    cout << "\nThe reversed sentence is: " << reverse(str);

    return 0;
}

string reverse(string sentence)
{
    string reverse_string = "";
    char *ptr;
    int temp = sentence.length() - 1;
    for (int i = temp; i >= 0; i--)
    {
        if (sentence[i] == ' ' || i == 0)
        {
            for (int j = i; j <= temp; j++)
            {
                if (j == 0)
                    reverse_string += " ";
                reverse_string += sentence[j];
            }
            temp = i - 1;
        }
    }

    return reverse_string;
}