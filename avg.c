#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,total,avg;
    printf("Ënter marks for Physics : ");
    scanf("%f",&a);

    printf("\n Ënter marks for Chemistry : ");
    scanf("%f",&b);

    printf("\n Ënter marks for Maths : ");
    scanf("%f",&c);

total = (a+b+c);
avg = (total/3.0);

    printf("\n the total marks are %f",total);
    printf("\n the average marks obtained are %f",avg);
}
