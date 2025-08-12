#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Ënter 1st number for a : ");
    scanf("%d",&a);

    printf("\n Ënter 2nd number b : ");
    scanf("%d",&b);

    printf("\n the  initial value of a is : %d \n",a);
    printf("\n the  initial value of b is : %d \n",b);

  c=a;
  a=b;
  b=c;

    printf("\n the swapped values of a is %d and b is %d : \n",a,b);
}
