#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,sum;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        sum=(d/(d+1))*(a*a);
        sum=sqrt(sum);
        printf("Case %d: %.10lf\n",i,sum);
    }
}
