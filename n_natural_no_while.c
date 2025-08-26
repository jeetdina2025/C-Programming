#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    i=1;
    printf("Enter the value of n to print n natural numbers are : ");
    scanf("%d",&n);
    printf("\n The first %d natural numbers are : \n",n);
    while(i<=n)
    {
        printf("\t %d \n",i);
        i++;
    }


}
