#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define b .33333333333333333333333333333333
int main()
{
    double r1,r2,h,p,a,area;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r1>>r2>>h>>p;
        a=((r1-r2)/h)*(h-p);
        r1-=a;
        area=b*pi*p*((r1*r1)+(r2*r1)+(r2*r2));
        printf("Case %d: %.10lf\n",i,area);
    }
}
