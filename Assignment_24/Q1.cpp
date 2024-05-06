// Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

int is_prime(int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			break;
		}
	}
	if(i == n)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int main()
{
	int n;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	if(is_prime(n))
	{
		cout<<n<<" is a Prime number";
	}
	else
	{
		cout<<n<<" is not a Prime number";
	}
	
	return(0);
}
