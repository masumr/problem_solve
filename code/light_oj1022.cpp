#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double a,b,area1;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        b=2*a;
        printf("Case %d: %.2lf\n",i,(b*b)-(pi*a*a));
    }
}
