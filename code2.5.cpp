#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
   int sz,i,j,temp;
   cout<<"Enter the size of array: ";
   cin>>sz;
   int A[sz];
   for(int i=0;i<sz;i++)
      A[i]=rand()%1001;
	  for(i=0;i<sz;i++)
	  {
	  	for(j=0;j<sz-i;j++)
	  	{
	  		if(A[j]>A[j+1])
		 {
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		 }
	    }
	  }
cout<<"The elements in ascending order are: ";
for(int i=0;i<sz;i++)
   cout<<A[i]<<" ";
return 0;	

}

   

