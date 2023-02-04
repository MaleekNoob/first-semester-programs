// Sorting of dynamic array

#include<iostream>
using namespace std;

void ascending_order(int *array, int size);

void swap(int &a, int &b);

void fill_array(int *array, int &size);

int *increaseArray(int *array, int &size);

int main() 
{ 
int i=1,j=1,k=1; 
while (i <= 2) { 
 j=1; 
 while (j <= 3) { 
 k=2; 
 while(k <= 4) 
 { 
 cout<<("*"); 
 k++; 
 } 
 
 cout<<("!"); 
 j++; 
 } 
 cout<<endl; 
 i++; 
} 
} 

void ascending_order(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(array[i] > array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void fill_array(int *array, int &size)
{
	int index = 0;
	char permission;
	cout << "\nFill array as much as you want!!!";
	do
	{
		if (index >= size)
		{
			array = increaseArray(array, size);
		}
		cout << "\nEnter number " << (index + 1) << ": ";
		cin >> *(array + index);
		cout << "\nDo you want to enter more (y/n)? ";
		cin >> permission;
		index++;
	}
	while(permission == 'y' || permission == 'Y');
}

int *increaseArray(int *array, int &size)
{
	int new_size = size + 1;
	int *newArray = new int[new_size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = array[i];
	}
	delete [] array;
	size = new_size;
	return newArray;
	
}
