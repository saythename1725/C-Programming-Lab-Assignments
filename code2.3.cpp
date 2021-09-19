#include<iostream>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
	int a,b,lcm;
    cout<<"enter the value of a and b: ";
    cin>>a>>b;
    if(a>b)
    lcm=a;
    else
        lcm = b;
    while(1)
    {
        if((lcm%a == 0) && (lcm%b == 0))
            break;
        else
            lcm++;
    }
    
    cout << fib(lcm);
    return 0;
}
