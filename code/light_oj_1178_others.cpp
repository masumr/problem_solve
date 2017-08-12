#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,area,sum;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        sum=((b*b)-(d*d)+((a-c)*(a-c)))/abs(a-c);
        sum*=sum;
        area=.5*(a+c)*sqrt(abs((b*b)-sum));
        printf("Case %d: %.10lf\n",i,area);
    }
}
