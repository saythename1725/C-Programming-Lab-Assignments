#include<iostream>
using namespace std;
int main()
{
	long int fact=1,n;
	cout<<"The value of n is: ";
	cin>>n;
	for(int i=1;i<n+1;i=i+1)
	{
		fact=fact*i;	
	}
	n=fact;
	cout<<"factorial of the number is: "<<n;
	
}
