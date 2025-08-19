#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter number to check divisibility with 7 : ");
    scanf("%d",&a);

    if((a%7)==0)
    {
            printf("\n%d is divisible by 7",a);
    }
    else
    {
        printf("\n%d is  not divisible by 7",a);
    }


}
