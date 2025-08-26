#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;

    printf("Enter the value of n to print n natural numbers are : ");
    scanf("%d",&n);
    printf("\n The first %d natural numbers are : \n",n);
    for(i=1;i<=n;i++)
    {
        printf("\t %d \n",i);
    }


}

