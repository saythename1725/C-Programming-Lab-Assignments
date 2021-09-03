#include <stdio.h>

int main()
{
    int a,b,gcd,i;
    printf("Enter two positive numbers which are separated by a space: \n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    if(gcd == 1)
    {
        printf("%d and %d are co-prime numbers", a, b);
    }
    else
    {
        printf("%d and %d are not co-prime and the largest common factor is %d",a,b,gcd);
    }
    return 0;
}
