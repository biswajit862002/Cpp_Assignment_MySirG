// Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

int highest_value_digit(int n)
{
	int i,r,max=0;
	int temp[10] = {0};
	
	while(n>0)
	{
		r = n%10;
		for(i=0; i<10; i++)
		{
			temp[r] = r;
		}
		n = n/10;	
	}
	max = temp[0];
	for(i=1; i<10; i++)
	{
		if(temp[i]>max)
		{
			max = temp[i];
		}
	}
	return(max);
}

int main()
{
	int n,max;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	max = highest_value_digit(n);
	cout<<"Maximum digit is : "<<max;
	
	return(0);
}
