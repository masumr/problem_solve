#include<stdio.h>
int main()
{
    char name[100];
    double a,b,c;
    gets(name);
    scanf("%lf%lf",&a,&b);
    c=a+(b*15)/100;
    printf("TOTAL = R$ %.2lf\n",c);
    return 0;

}
