#include<stdio.h>
#include<conio.h>
void main()
{   float length,breadth,area,perimeter ;
    printf("Enter length");
    scanf("%f",&length);
    printf("Enter breadth");
    scanf("%f",&breadth);
    area=(length)*(breadth);
    printf("%f area",area);
    perimeter=2*(length+breadth);
    printf("%f perimeter",perimeter);
    getch();
}
