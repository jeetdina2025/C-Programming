#include<stdio.h>
void add(int , int);

void main()
{
    int a,b,c;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    add(a,b);

}
void add(int x , int y)
{


    int z;
    z=x+y;
    printf("%d",z);
}


