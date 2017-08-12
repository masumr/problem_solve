#include<stdio.h>
#include<math.h>
int main()
{
    double n,sum;
    while(scanf("%lf",&n)==1)
    {
        sum=(n*n*(n+1)*(n+1))/4;
        printf("%.0lf\n",sum);
    }
    return 0;
}
