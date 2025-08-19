#include<stdio.h>
#include<conio.h>
void main()
{   float gross_salary, allowances, deductions, net_salary;
    printf("Enter gross salary");
    scanf("%f",&gross_salary);
    allowances =0.1*gross_salary;
    deductions =0.03*gross_salary;
    net_salary=gross_salary+allowances-deductions;
    printf("%f net salary",net_salary);
    getch();
    }
