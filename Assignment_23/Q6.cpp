// Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;

int main()
{
	float a,b,c,sum = 0;
	float avg;
	cout<<"Enter three number : ";
	cin>>a>>b>>c;
	
	sum = a+b+c;
	avg = sum / 3.0;
	
	cout<<"calculate an average of 3 numbers = "<<avg;
	
	return(0);
}
