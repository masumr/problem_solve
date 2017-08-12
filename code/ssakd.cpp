#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,area,pi=acos(-1);
    int t,c=0;
    cin>>t;
    while(t--)
    {
        cin>>r;
        area=(4*r*r)-(pi*r*r);
        printf("Case %d: %.4lf\n",++c,area);
    }
}
