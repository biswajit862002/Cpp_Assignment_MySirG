// Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	
	cout<<"Before Swapping :-"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout<<"After Swapping :-"<<endl;
	cout<<"a = "<<a<<" b = "<<b;

	return(0);
}
