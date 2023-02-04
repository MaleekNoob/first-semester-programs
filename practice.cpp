#include<iostream>
#include<conio.h>
using namespace std;

string reverse(string str);

int main()
{
	string sentence;
	cout << "\nEnter string: ";
	getline(cin, sentence);
	//cout << reverse(sentence);
	return 0;
}

string reverse(string str)
{
	string temp;	//this varible will store final result
	int index = str.length();
	for(int i = str.length() - 1; i >= 0; i--)
	{
		cout << str[i];
		/*if(str[i] == ' ' || str[i] == 0)
		{
			for (int j = i; j < index; j++)
			{
				temp += str[j];
			}
			index = i;
		}*/
	}
	
	return temp;
}
