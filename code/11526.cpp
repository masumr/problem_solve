#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll j,t,a,i,sum,m;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        sum=0;
        cin>>a;
        m=sqrt(a);
        for(i=m;i>=1;i--)
        {
            sum=sum+(a/i);
            sum=sum+i*((a/i)-m);
            m=a/i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
