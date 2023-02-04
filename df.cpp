#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout << "\nEnter number: ";
	cin >> num;
	int chunk = num / 2;
	int index = 0;
	for(int i = 0; i < num; i++)
	{
		if(i < (num / 2))
		{
			if (i == 0)
				cout << '*' << setw(num) << '*' << endl;
			else
			{
				cout << '*' << setw(i) << '*' << setw(num - (2 * i)) << '*' << setw(i) << '*' << endl;
			}
		}
		else
		{
			index--;
			if (i == num - 1)
				cout << '*' << setw(num) << '*' << endl;
			else
			{
				cout << '*' << setw(num - (i + 1)) << '*' << setw((i - (chunk - 1)) * 2) << '*' << setw(num - (i + 1)) << '*' << endl;
			}
		}
	}
}
