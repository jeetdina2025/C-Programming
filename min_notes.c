#include<stdio.h>
#include<conio.h>

void main()
{
    int amt;
    int a,b,c,d,e,f,g,h;
    int p,q,r,s,t,u,v,w,x;
    printf("Enter any value of price");
    scanf("%d",&amt);
    a=amt/500;
    p=amt%500;
    b=p/200;
    q=p%200;
    c=q/50;
    s=q%50;
    d=s/20;
    t=s%20;
    e=t/10;
    u=t%10;
    f=u/5;
    v=u%5;
    g=v/2;
    w=v%2;
    h=w/1;
    x=w%1;

    printf("%d 500rs notes \n",a);
        printf("%d 200rs notes \n",b);
    printf("%d 100rs notes \n",c);
    printf("%d 50rs notes \n",d);
    printf("%d 20rs notes \n",e);
    printf("%d 10rs notes \n",f);
        printf("%d 5rs notes \n",g);
            printf("%d 1rs notes \n",h);




}
