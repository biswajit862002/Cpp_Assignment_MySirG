// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;

float area(int r)
{
	return(3.14*r*r);
}

float area(float l,float w)
{
	return(l*w);
}

float area(float b,int h)
{
	return(.5*b*h);
}

int main()
{
	int r;
	float l,w,b,h;
	cout<<"\nEnter radius : ";
	cin>>r;
	
	cout<<"\nArea of circle is = "<<area(r);
	
	cout<<"\n\nEnter Leangth : ";
	cin>>l;
	cout<<"Enter Width : ";
	cin>>w;
	
	cout<<"\nArea of rectangle is = "<<area(l,w);
	
	cout<<"\n\nEnter base value : ";
	cin>>b;
	cout<<"Enter height : ";
	cin>>h;
	
	cout<<"\nArea of triangle is = "<<area(b,h);
	
	return(0);
}
