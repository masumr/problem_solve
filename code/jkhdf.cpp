#include<stdio.h>
int main()
{
    int a,b,c,t,t1;
    scanf("%d%d%d",&a,&b,&c);
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    int g=a;
    while(g!=0)
    {
        t1=g;
        g=c%g;
        c=t1;
    }
    printf("%d",c );
}
