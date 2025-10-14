#include<stdio.h>
int add(void);

void main()
{
    int a,b,c;

    c=add();
    printf("%d",c);
}
int add(void)
{
    int x,y,z;
    printf("enter value of x :");
    scanf("%d",&x);
    printf("enter value of y :");
    scanf("%d",&y);
    z=x+y;
    return z;

}
