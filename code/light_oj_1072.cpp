#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
int main()
{
    double a,b,thata;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        double sum=sin(pi/b);
        printf("Case %d: %.10lf\n",i,((a*sum)/(1+sum)));
    }
}
