#include<stdio.h>
int main()
{
	int b,c,p,k;
	char a;
	printf("Input a character: \n");
    scanf("%c",&a);
    printf("Enter the value of k where k<=4: \n");
    scanf("%d",&k);
    printf("Enter the value of p where p<=3: \n");
    scanf("%d",&p);
    b=a<<k;
    c=b>>p;
    printf("a-c is %d",a-c);
    return 0;
}
