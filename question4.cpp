/*
Name: Maleek Hussain Ali
Section: 22i-1526
Section: SE-B
*/

#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;


string look(char);

string convoBin(int);

string revert(string);

string cipher(string);

string de_cipher(string);

int convertIntoDec(string);

char convertDecIntoMessage(int);

int main()
{
    string letter, encodedValue, decodedmessage;
    cout << "\nEnter your message: ";
    getline(cin, letter);
    
    for(int i = 0; i < letter.length(); i++)
    {
        letter[i] = tolower(letter[i]);
    }

    encodedValue = cipher(letter);

    cout << endl << encodedValue;
    decodedmessage = de_cipher(encodedValue);
    cout << "\nThe decoded value is " << decodedmessage;

}

string look(char character)
{
    int code = static_cast<int>(character) - 97;
    return (convoBin(code));
}

string convoBin(int number)
{
    int rem;
    char bin;
    string binaryString = "", revertBinaryString;
    for(int i = 0; i < 5; i++)
    {
        rem = number % 2;
        if(rem == 1)
            bin = '1';
        else if(rem == 0)
            bin = '0';
        binaryString += bin;
        number /= 2;
    }
    revertBinaryString = revert(binaryString);

    return revertBinaryString;
}

string revert(string inputString)
{
    string toReturn = "";
    for(int i = (inputString.length() - 1); i >= 0; i--)
    {
        toReturn += inputString[i];
    }

    return toReturn;
}

string cipher(string letter)
{
    int ch;
    string encodedText = "";
    for(int i = 0; i < letter.length(); i++)
    {
        ch = letter[i];
        encodedText += look(ch);
    }

    return encodedText;
}

string de_cipher(string encodedString)
{
    int numberOfCharacters, temp = 0;
    numberOfCharacters = encodedString.length() / 5;
    string str[numberOfCharacters], decryptedMessage = "";
    for(int i = 0; i < numberOfCharacters; i++)
    {
        for(int j = temp; j < 5 + (i * 5); j++)
        {
            str[i] += encodedString[j];
            temp = (j + 1);
        }
    }

    for(int i = 0; i < numberOfCharacters; i++)
    {
        decryptedMessage += convertDecIntoMessage(convertIntoDec(str[i]));
    }

    return decryptedMessage;
}

int convertIntoDec(string stringVariable)
{
    int decimal = 0;

    for(int i = 0; i < 5; i++)
    {
        if(stringVariable[4-i] != '0')
        {
            decimal += pow(2,i);
        }
    }

    return decimal;
}

char convertDecIntoMessage(int decimal)
{
    decimal += 97;
    return(static_cast<char>(decimal));
}
