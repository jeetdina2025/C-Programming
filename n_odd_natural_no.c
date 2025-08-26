#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;

    printf("Enter the value of n to print first n  odd natural numbers  : ");
    scanf("%d",&n);
    printf("\n The first %d  odd natural numbers are : \n",n);
    for(i=1;i<=n;i++)
    {
        printf("\t %d \n",2*i-1);
    }


}


