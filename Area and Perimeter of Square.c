#include<stdio.h>
#include<conio.h>
void main()
{   float length,area,perimeter ;
    printf("Enter length");
    scanf("%f",&length);
    area=(length)*(length);
    printf("%f area",area);
    perimeter=4*length;
    printf("%f perimeter",perimeter);
    getch();
}
