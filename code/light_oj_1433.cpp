#include<bits/stdc++.h>
using namespace std;
int main()
{
    double o1,o2,a1,a2,b1,b2;
    double a,c,sum,sum2,b;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>o1>>o2>>a1>>a2>>b1>>b2;
        a=(o1-a1)*(o1-a1)+(o2-a2)*(o2-a2);
        b=sqrt(a);
        c=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2);
        sum=((2*a)-c)/(2*a);
        sum2=acos(sum);
        printf("Case %d: %.5lf\n",i,sum2*b);

    }
}
