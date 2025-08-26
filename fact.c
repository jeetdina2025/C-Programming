#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a;
    int fact=1;
    printf("Enter the value to get its factorial  : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact*=i;
    }
    printf("\n the factorial of %d is %d ",n,fact);


}



