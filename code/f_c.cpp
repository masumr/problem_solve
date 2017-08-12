#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double l1,w,r,l,t,area1,area,h,a;
    int i,n;
    double q=1.333333333333333333333333333;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&l1,&w,&r);
        h=((r*2)-w)/2;
        a=sqrt((4*r*r)-(w*w));
        area1=q*a*h;
        area=pi*r*r;
        printf("Case %d: %.6lf\n",i,area-area1);


    }
}
