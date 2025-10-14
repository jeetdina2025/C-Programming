#include<stdio.h>
void add(void);

void main()
{
    int a,b,c;

    add();
}
void add(void)
{
    int x,y,z;
    printf("enter value of x :");
    scanf("%d",&x);
    printf("enter value of y :");
    scanf("%d",&y);
    z=x+y;
    printf("%d",z);
}

