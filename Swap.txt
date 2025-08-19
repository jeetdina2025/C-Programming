#include<stdio.h>
#include<conio.h>
void main()
{   int a,b,c;
    printf("Enter First number");
    scanf("%d",&a);
    printf("Enter Second number");
    scanf("%d",&b);
    printf("%d Initial value of a",a);
    printf("%d Initial value of b",b);
    c=a;
    a=b;
    b=c;
    printf("The swapped value of a is %d and b is %d",a,b);
    getch();
    }
