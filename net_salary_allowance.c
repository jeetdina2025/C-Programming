#include<stdio.h>
#include<conio.h>

void main()
{
    float gs,ns,a,d;
    printf("Enter your Gross salary : ");
    scanf("%f",&gs);

    if(gs>10000)
    {
        a=gs*0.1;
        d=gs*0.03;
        printf("\nAllowances are 10 percent of gross salary that is %.2f \n",a);
        printf("Deductions are 3 percent of gross salary that is %.2f \n",d);
        ns=gs+a-d;
        printf("Therefore the net salary is %.2f \n",ns);

    }
        else if(gs>5000)
    {
        a=gs*0.07;
        d=gs*0.02;
        printf("\n Allowances are 7 percent of gross salary that is %.2f \n",a);
        printf("Deductions are 2 percent of gross salary that is %.2f \n",d);
        ns=gs+a-d;
        printf("Therefore the net salary is %.2f \n",ns);

    }
}

