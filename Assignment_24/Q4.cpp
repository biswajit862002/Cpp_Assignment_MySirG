// Define a function to print Pascal Triangle up to N lines

#include<iostream>
using namespace std;

int fact(int n)
{
	if(fact==0)
	{
		return(1);
	}
	int fact = 1;
	for(int i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	return(fact);
}

int comb(int n,int r)
{
	int com;
	com = (fact(n)/(fact(r) * fact(n-r)));
	return(com);
}

int main()
{
	int n;
	cout<<"Enter how many rows you want : ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(j == 0)
			{
				for(int k=1; k<n-i; k++)
				{
					cout<<" ";
				}
			}	
			cout<<" "<<comb(i,j);
		}
		cout<<endl;
	}
	return(0);
}
