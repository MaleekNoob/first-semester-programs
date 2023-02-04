#include<iostream>
using namespace std;
int main(){
	int a=5,b=6,c=7;
	
	if (a>b && a>c)
	{
		cout<<"The max value is "<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"The max value is "<<b;
	}
	else
	{
		cout<<"The max value is "<<c;
	}

}
