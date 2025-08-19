#include<stdio.h>
#include<conio.h>
void main()
{   float gross_sales, discounts, net_sales;
    printf("Enter gross sales");
    scanf("%f",&gross_sales);
    discounts =0.1*gross_sales;
    net_sales=gross_sales-discounts;
    printf("%f net sales",net_sales);
    getch();
    }
