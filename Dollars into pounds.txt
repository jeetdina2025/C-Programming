#include<stdio.h>
#include<conio.h>
void main()
{   float dollar, pounds, rupees;
    printf("Enter dollar");
    scanf("%f",&dollar);
    rupees=dollar*48;
    pounds=rupees/70;
    printf("%f pounds",pounds);
    getch();
}
