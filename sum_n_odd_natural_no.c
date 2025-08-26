#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a;
    int sum=0;
    printf("Enter the value of n to print sum of first n  odd natural numbers  : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=2*i-1;
        sum+=a;
    }
    printf("\n the sum of first %d odd natural numbers is %d",n,sum);


}



