#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    int sum=0;
    printf("Enter the value of n to print sum of n natural numbers : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum+=i;

    }
    printf("The sum of first %d natural numbers is %d",n,sum);


}


