// Write functions using function overloading to add two numbers having different data types.

#include<iostream>
using namespace std;

int add(int x,int y)
{
	return(x+y);
}

float add(float x,float y)
{
	return(x+y);
}

float add(int x,float y)
{
	return(x+y);
}

int main()
{
	int x,y;
	cout<<"\nEnter two numbers [int type] : ";
	cin>>x>>y;
	
	cout<<"Add two number = "<<add(x,y)<<endl;
	
	float a,b;
	cout<<"\nEnter two numbers [float type] : ";
	cin>>a>>b;
	
	cout<<"Add two number = "<<add(a,b)<<endl;
	
	int n;
	float m;
	cout<<"\nEnter two numbers [1 int & 1 float type] : ";
	cin>>n>>m;
	
	cout<<"Add two number = "<<add(n,m);
}
