#include<stdio.h>
#include<conio.h>
void main()
{
    float unit,bill;
    printf("enter the units of your bill : ");
    scanf("%f",&unit);
    if(unit<=100)
    {
        bill=unit*1.5;
        printf("the rate as per your units are rupees 1.5 per unit and bill is %.2f ",bill);
    }
        else if((unit>100)&& (unit <=300))
    {
        bill=unit*2.5;
        printf("the rate as per your units are rupees 2.5 per unit and bill is %.2f ",bill);

        }
    else

    {
        bill=unit*4.0;
        printf("the rate as per your units are rupees 4 per unit and bill is %.2f ",bill);
    }

}
