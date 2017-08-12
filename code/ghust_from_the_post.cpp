#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;0
int main()
{
    ll n,a,b,c,d;
    ll count=0,sum=0,k;
    cin>>n>>a>>b>>c;
    d=n;
    while(n>=a)
    {
        sum+=(n/a);
    }
    ll sum1=0;
    while(d>=b)
    {
        sum1+=(d/b);
        ll sum3=(c*(d/b));
        d=((d%b))+sum3;
    }
    sum1+=(d/a);
    if(sum>sum1)
        cout<<sum<<endl;
    else
        cout<<sum1<<endl;
}
