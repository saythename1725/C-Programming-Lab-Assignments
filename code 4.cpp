#include <stdio.h>

int main()
{
int a,fib1,fib2,fib3,prev1,prev2,next;
printf("Enter your number: \n");
scanf("%d",&a);
 if((a==0)||(a==1))
   printf("the first two fibonacci numbers are 0 and 1 so choose a number other than 0 or 1");
 else
 {
   fib1=0;
   fib2=1;
   fib3=fib1+fib2;
   while(fib3<a)
   {
     fib1=fib2;
     fib2=fib3;
     fib3=fib1+fib2;
     next=fib3;
   }
   if(fib3==a)
     printf("\%d is a Fibonacci number and the previous 2 fibonacci numbers are: %d and %d",a,fib1,fib2);
   else
     printf("\%d is not a Fibonacci number and the next fibonacci number larger than %d is %d ",a,a,next);
 }
 return 0;
}
