#include<bits/stdc++.h>
#define a 1.333333333333333333333333333
using namespace std;

int main()
{
    double t,s,area,a1,b1,c1,d1=-1,mid1,mid2,mid3;
    while(cin>>mid1>>mid2>>mid3)
    {
        if(mid1+mid2>mid3 && mid1+mid3>mid2 && mid2+mid3>mid1)
        {
            s=(mid1+mid2+mid3)/2;
            area=sqrt(s*(s-mid1)*(s-mid2)*(s-mid3))*a;
            printf("%.3lf\n",area);
        }
        else
            printf("%.3lf\n",d1);
    }
    return 0;
}
