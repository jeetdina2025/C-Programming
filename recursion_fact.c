#include<stdio.h>
int fact(int);
void main()
{
    int a;
    printf("\n enter a number to its factorial :");
    scanf("\n%d",&a);
    printf("\nthe answer is : %d",fact(a));

}
fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
