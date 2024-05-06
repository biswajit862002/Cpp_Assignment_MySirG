// Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;

int fib(int n)
{
	int f1 = 1,f2 = 1,temp;
	
	for(int i=3; i<=n; i++)
	{
		temp = f1 + f2;
		f1 = f2;
		f2 = temp;
	}
	return(f2);
}

int main()
{
	int n,flag=0;
	cout<<"Enter a number : ";
	cin>>n;
	
	cout<<"\nFibonacci series...!\n";
	for(int i=1; ; i++)
	{
		int value = fib(i);
		cout<<value<<" ";
		
		if(value == n)
		{
			flag=1;
			break;
		}
		if(value > n)
		{
			break;
		}
	}
	
	if(flag == 1)
	{
		cout<<"\n\nYour entired number is a term in a fibonacci series";
	}
	else
	{
		cout<<"\n\nYour entired number is not a term in a fibonacci series";
	}
	
	return(0);
}
