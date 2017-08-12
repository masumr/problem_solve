#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a1,a2,b1,b2,r1,r2,thata,sum1,sum2;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a1>>b1>>r1>>a2>>b2>>r2;
        sum1=(r1+r2)-sqrt(((a1-a2)*(a1-a2))+(b1-b2)*(b1-b2));
        sum2=(sum1*r1)/(r1+r2);
        sum2=(sum1*r2)/(r1+r2);


    }
}
