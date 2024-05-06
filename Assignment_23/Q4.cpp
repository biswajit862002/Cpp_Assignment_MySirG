// Write a C++ program to calculate the area of a circle

#include<iostream>
#define pi 3.14
using namespace std;

int main()
{
	float r,area;
	cout<<"Enter radius value : ";
	cin>>r;
	
	area = pi*r*r;
	
	cout<<"Calculate the area of circle = "<<area;
	
	return(0);
}