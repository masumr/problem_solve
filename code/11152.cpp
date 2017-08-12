#include<bits/stdc++.h>
#define pi 3.14159265358979323846264338327950
using namespace std;
int main()
{
    double a,b,c,area1,area2,area3,s,r,R;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        area1=sqrt(s*(s-a)*(s-b)*(s-c));
        R=((a*b*c)/(4*area1));
        area2=(pi*R*R)-area1;
        r=(area1/s);
        area3=(pi*r*r);
        area1=area1-area3;
        printf("%.4lf %.4lf %.4lf\n",area2,area1,area3);
    }
    return 0;
}
