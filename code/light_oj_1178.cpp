#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,area;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        area=.25*((a+c)/abs(a-c))*sqrt((a+b+d-c)*(c+b+d-a)*(a+d-c-b)*(a+b-c-d));
        printf("Case %d: %.10lf\n",i,area);
    }
}
