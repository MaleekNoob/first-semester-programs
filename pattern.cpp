// C++ program to dynamically allocate and manage memory
#include <iostream>
using namespace std;

int * increaseStruct(int *array, int &size, int increment);   //This function is used when additional memory is required

int * deleteExtra(int *array, int &size, int index);	//Function remove any extra memory keeping only sufficient memory

int main() {
    // Declaration of Dynammic memory
    int size = 10, iter = 0;  //iter (iteration) represent index value
    int *array = new int[size];
    char permission;
    
    
    do
    {
    	if(iter == size)
    	{
    		array = increaseStruct(array, size, 1);
		}
    	cout << "\nEnter number " << (iter+1) << ": ";
    	cin >> array[iter];
    	iter++;
    	cout << "\nDo you want to enter another number(y/n)? ";
    	cin >> permission;
	}
	while(permission == 'y' || permission == 'Y');
	
	if(iter < size - 1)
	{
		array = deleteExtra(array, size, iter);
	}
	
	
	cout << endl << endl << endl;
	iter = 0;
	
	
	for (int i = 0; i < size; i++)
	{
		cout << "\nIndex " << iter + 1 << " is " << array[iter];
		iter++;
	}
    
    return 0;
}

int * increaseStruct(int *array, int &size, int increment)
{
	int new_size = size + increment;
	int *new_array = new int[new_size];
	
	for (int i = 0; i < size; i++)
	{
		new_array[i] = array[i];
	}
	
	delete [] array;
	size = new_size;
	
	return new_array;
}

int * deleteExtra(int *array, int &size, int index)
{
	int *new_array = new int[index + 1];
	
	for (int i = 0; i < index; i++)
	{
		new_array[i] = array[i];
	}
	delete [] array;
	size = index;
	
	return new_array;
}
