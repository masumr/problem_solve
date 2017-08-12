#include<stdio.h>
int main()
{
    long long int sum,c=1;
    double m,d;
    int i,j,x,n;
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
        }
        if(i==n)
            printf("=");
        else
        printf("+");
    }
    for(i=1;i<=n;i++)
    {
        c=c*10;
    }
    m=(double)(10*x*(c-1))/81;
    d=(double)(x*n)/9;
    sum=m-d;
    printf("%lld",sum);



}
