#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod(ll n,ll p,ll r)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        ll ret=bigmod(n,p/2,r);
        return ((ret%r)*(ret%r))%r;
    }
    else
        return ((n%r)*(bigmod(n,p-1,r)%r))%r;
}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum=bigmod(a,b,c);
    cout<<sum<<endl;
}
