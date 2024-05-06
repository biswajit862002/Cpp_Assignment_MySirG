// Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

int add(int a,int b,int c=0)	//default argument
{
	int add;
	add = a+b+c;
	return(add);
}

int main()
{
	int a,b;
	cout<<"Enter two number :";
	cin>>a>>b;
	
	cout<<"\nSum of two number is = "<<add(a,b);
	
	int c;
	cout<<"\n\nEnter three number :";
	cin>>a>>b>>c;
	
	cout<<"\nSum of three number is = "<<add(a,b,c);
	
	return(0);
}
