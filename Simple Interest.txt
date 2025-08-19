#include<stdio.h>
#include<conio.h>
void main()
{   float I,P,N,R;
    printf("Enter principle amount ");
    scanf("%f",&P);
    printf("Enter Rate of Interest ");
    scanf("%f",&R);
    printf("Enter Number of years ");
    scanf("%f",&N);
    I=(P*N*R)/100;
    printf("%f Interest",I);
    getch();
}
