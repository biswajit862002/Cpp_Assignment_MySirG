// Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a,b;
	cout<<"Enter two number : ";
	cin>>a>>b;
	
	cout<<"Before swapping the value :-"<<endl;
	cout<<"a = "<<a<<" b = "<<b;
	
	swap(a,b);
	
	cout<<"\nAfter swapping the value :-"<<endl;
	cout<<"a = "<<a<<" b = "<<b;
	
	return(0);
}
