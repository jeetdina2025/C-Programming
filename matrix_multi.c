#include<stdio.h>
void main()
{
    int n,i,j,x;


    printf("Enter dimensions of the array");
    scanf("%d",&n);
        int a[n][n];
    int b[n][n];
    int c[n][n];
    // taking first c matrix as 0 as we need to use it in sum = sum =a like that
    for(i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            c[i][j]=0;
        }
    }
    //taking value of matrix a
    printf("Enter value of matrix A \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element for A[%d][%d] place :\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    // taking value of matrix b

     printf("Enter value of matrix B \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element for B[%d][%d] place :\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    //multiplication of A and B

     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(x=0;x<n;x++)
            {
                c[i][j]=c[i][j]+(a[i][x]*b[x][j]);
            }
        }
    }

    printf("The resultant matrix of A X B is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" \t %d \t ",c[i][j]);
        }
        printf("\n");
    }

}











