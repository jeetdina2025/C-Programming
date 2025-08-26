#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a;
    int sum=0;
    printf("Enter the value of n to print sum of first n  even natural numbers (including Zero) : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=2*i;
        sum+=a;
    }
    printf("\n the sum of first %d even natural numbers is %d",n,sum);


}




