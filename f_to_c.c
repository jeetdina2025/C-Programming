#include<stdio.h>
#include<conio.h>
void main()
{
    float cel,far;
    printf("Ënter degree in farenheit");
    scanf("%f",&far);

    cel=(5.0/9.0)*(far-32);

    printf("the celcius temperature of %.2f degree farenheit is %.2f",far,cel);

}
