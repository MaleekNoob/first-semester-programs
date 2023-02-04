#include<iostream>
#include<iomanip>
using namespace std;

int giveNumber(int);

void series(int);

int main()
{
	int num, initial, final;
	cout << "\nEnter number: ";
	cin >> num;
	initial = num;
	final = initial;
	for(int j=0; j<7; j++)
	{
		series(num);
	}
	return 0;
}

int giveNumber(int a)
{
	int n=10;
	while(a%n != a)
	{
		n *= 10;
	}
	return (n/10);
}

void series(int num)
{
	int i=0, initial, final, counter = 0;
	while(num>0)
	{
		if(i == 0)
		{
			final = num / giveNumber(num);
		}
		initial = num / giveNumber(num);
		if(initial == final)
		{
			final = initial;
			counter++;
		}
		else
		{
			cout << counter << "" << final;
			final = initial;
			counter =1;
		}
		//cout << endl;
		num %= giveNumber(num);
		if((num % giveNumber(num)) == num)
		{
			break;
		}
		i++;
	}	
	cout << counter << "" << final;
}