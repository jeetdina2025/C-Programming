#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,add,sub,multiply,divide,choice,ans;
    printf("Enter 2 numbers\n");
    printf("Enter 1 to add\n 2 to subtract\n 3 to multiply \n 4 to divide\n");
    scanf("%f %f %f",&a,&b,&choice);

    if(choice==1)
    {
        ans=a+b;
    printf("The addition of %.2f and %.2f is %.2f",a,b,ans);
    }
    else if(choice==2)
    {
        ans=a-b;
    printf("The subtraction of %.2f and %.2f is %.2f",a,b,ans);
    }
    else if(choice==3)
    {
        ans=a*b;
    printf("The multiplication of %.2f and %.2f is %.2f",a,b,ans);
    }
    else if(choice==4)
    {
        ans=a/b;
    printf("The division of %.2f and %.2f is %.2f",a,b,ans);
    }
    else
    {
        printf("Invalid choice");
    }
}
