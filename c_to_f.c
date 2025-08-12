#include<stdio.h>
#include<conio.h>
void main()
{
    float cel,far;
    printf("Ënter degree in celcius");
    scanf("%f",&cel);

    far=(9.0/5.0)*cel+32;

    printf("the fahrenheit temperature of %.2f degree celcius is %.2f",cel,far);

}
