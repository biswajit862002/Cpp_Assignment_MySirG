// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;

int maximum_number(int n,int m)
{
	if(n>m)
	{
		return(n);
	}
	else
	{
		return(m);
	}
}

float maximum_number(float n,float m)
{
	if(n>m)
	{
		return(n);
	}
	else
	{
		return(m);
	}
}

int main()
{
	int num1,num2;
	
	cout<<"Enter any two numbers : ";
	cin>>num1>>num2;
	
	cout<<"\nMaximum number is = "<<maximum_number(num1,num2)<<endl<<endl;
	
	float num3,num4;
	
	cout<<"Enter any two numbers : ";
	cin>>num3>>num4;
	
	cout<<"\nMaximum number is = "<<maximum_number(num3,num4);
	
	return(0);	
}

