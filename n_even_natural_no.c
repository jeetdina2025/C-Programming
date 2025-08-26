#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;

    printf("Enter the value of n to print first n  even natural numbers (including Zero) : ");
    scanf("%d",&n);
    printf("\n The first %d  even natural numbers are : \n",n);
    for(i=0;i<n;i++)
    {
        printf("\t %d \n",2*i);
    }


}



