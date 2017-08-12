#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll x,y;
    ll t;
    cin>>x>>y;
    ll a[x+5];
    ll sum=0;
    for(ll i=1;i<=x;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll c;
    ll ans=0;
    for(ll i=1;i<=y;i++)
    {
        cin>>c;
        sum-=a[c];
        ans+=sum*a[c];
        a[c]=0;
    }
    for(ll i=1;i<x;i++)
        ans+=a[i]*a[i+1];
    ans+=a[1]*a[x];
    cout<<ans<<endl;
}
