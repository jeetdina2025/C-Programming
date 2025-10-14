#include<stdio.h>
int add(int , int);

void main()
{
    int a,b,c;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    c=add(a,b);
    printf("%d",c);
}
int add(int x , int y)
{
    int z;
    z=x+y;
    return z;
}
