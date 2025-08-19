#include<stdio.h>
#include<conio.h>
void main()
{   int a,b;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    if(a>b)
    printf("a=%d is greater than b=%d",a,b);
    else
    printf("b=%d is greater than a=%d",b,a);
    getch();
}
