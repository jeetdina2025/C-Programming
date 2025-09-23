#include<stdio.h>

void main()
{
    int n,i,deno[9]={500,200,100,50,20,10,5,2,1}, a[9],temp;
    printf("Enter any value of price");
    scanf("%d",&n);
    temp=n;
    for(i=0;i<9;i++)
    {
        a[i]=temp/deno[i];
        temp=temp%deno[i];
    }
    for( i=0; i<9 ;i++)
    {


        if(a[i]==0)
    {
        continue;  // to avoid printing 0 notes of 50rs like that

    }  else
        {
                printf("%d notes of %d rs \n",a[i],deno[i]);
        }
    }
}

