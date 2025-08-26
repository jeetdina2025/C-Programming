#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    int sum=0;
    int n;
    printf("Enter the value of n to print sum of n natural numbers : ");
    scanf("%d",&n);
    do
    {
       sum+=i;
       i++;

}while(i<=n);
printf("The sum of first %d natural numbers is %d",n,sum);
}




