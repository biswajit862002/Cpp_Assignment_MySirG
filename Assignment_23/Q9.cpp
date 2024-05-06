// Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;

int main()
{
	int a,b,max=0;
	
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	
	if(a>b)
	{
		cout<<"Maximum number is = "<<a;
	}
	else
	{
		cout<<"Maximum number is = "<<b;
	}

	return(0);
}
