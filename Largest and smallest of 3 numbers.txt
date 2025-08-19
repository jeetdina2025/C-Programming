#include<stdio.h>
#include<conio.h>
void main()
{   int a,b,c,largest,smallest;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if(a<=b && a<=c)
    {smallest=a;}
    else if(b<=a && b<=c)
    {smallest=b;}
    if(c<=a && c<=b)
    {smallest=c;}
    if(a>=b && a>=c)
    {largest=a;}
    else if(b>=a && b>=c)
    {largest=b;}
    if(c>=a && c>=b)
    {largest=c;}
    printf("%d Smallest number",smallest);
    printf("%d Largest number",largest);
    getch();
    }
