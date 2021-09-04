#include <stdio.h>
int main()
{
    int n,i,j,isPrime;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        break;
        }
    }
        if(i>n/2)
        printf("%d is a Prime Number\n",n);
        else
        {
            printf("%d is not a prime number and the prime factors are: \n",n);
                for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }
        }
        return 0;
}
