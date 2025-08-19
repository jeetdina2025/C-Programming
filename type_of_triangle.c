#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter three lengths to know that they form triangle or not ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
            printf("\nThe lengths %d %d %d can form a triangle",a,b,c);

             if(((a==b) && (b==c) && (a==c)))
    {
            printf("\nThe lengths %d %d %d can form an equilateral triangle",a,b,c);
    }
    else if(((a==b) && (b!=c)) || ((a==c) && (b!=a)) || ((c==b) && (a!=c)))
    {
                    printf("\nThe lengths %d %d %d form a isosceles triangle",a,b,c);

    }
    else
    {
        printf("\n The triangle is Scalene ");
    }
    }
    else
    {
                    printf("\nThe lengths %d %d %d CANNOT form a triangle",a,b,c);

    }

}
