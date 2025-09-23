#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,temp;
    int a[5];
    printf("Enter 5 values");
    for(i=0;i<5;i++)
    {
        printf("\nEnter value %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    // sorting...

    for(i=0;i<4;i++)
    {
        for(j=(i+1);j<5;j++)
        {
            if(a[i]>a[j])
            {


                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("The Sorted elements are\n");
     for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
















