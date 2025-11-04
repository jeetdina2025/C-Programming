#include<stdio.h>
int gcd(int,int);
void main()
{
    int a,b;
    printf("\n enter two numbers to get their gcd :");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    printf("\nthe answer is : %d",gcd(a,b));

}
gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
        if(b == 0)
    {
        return a ;
    }
    int r = a%b;
    if(r==0)
    {
        return  b;
    }
    else
    {
         gcd(b,r);
    }
}
