// Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

int pow(int b,int e)
{
	int power = 1;
	for(int i=1; i<=e; i++)
	{
		power = power * b;
	}
	return(power);
}

int main()
{
	int b,e;
	cout<<"Enter base value : ";
	cin>>b;
	cout<<"Enter exponential value : ";
	cin>>e;
	
	cout<<b<<" power of "<<e<<" is = "<<pow(b,e);
	
	return(0);
}
