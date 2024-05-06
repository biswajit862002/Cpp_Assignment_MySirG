// Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;

int main()
{
	float l,w,h,volume;
	cout<<"Enter Length : ";
	cin>>l;
	cout<<"Enter Width : ";
	cin>>w;
	cout<<"Enter Height : ";
	cin>>h;
	
	volume = l*w*h;
	
	cout<<"calculate the volume of a cuboid = "<<volume;
	
	return(0);
}
