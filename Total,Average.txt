#include<stdio.h>
#include<conio.h>
void main()
{   float a,b,c,total,average;
    printf("Enter marks for Physics");
    scanf("%f",&a);
    printf("Enter marks for Chemistry");
    scanf("%f",&b);
    printf("Enter marks for Maths");
    scanf("%f",&c);
    total=a+b+c;
    average=total/3.0;
    printf("%f Total Marks",total);
    printf("%f Average",average);
    getch();
    }
