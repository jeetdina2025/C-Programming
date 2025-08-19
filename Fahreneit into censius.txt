#include<stdio.h>
#include<conio.h>
void main()
{   float fahrenheit,celsius ;
    printf("Enter fahrenheit ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%f celsius",celsius);
    getch();
}
