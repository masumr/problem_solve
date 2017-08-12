#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll d,k,a,b,t;
    ll x;
    cin>>d>>k>>a>>b>>t;
    ll time=0;
    if(k>=d)
        time=(d*a);
    else
    {
        time=(k*a);
        d-=k;
        ll count=d/k;
        x=d%k;
        time+=min((k*a+t)*count,(k*b)*count);
        time+=min(x*b,x*a+t);
    }
    cout<<time<<endl;
}
