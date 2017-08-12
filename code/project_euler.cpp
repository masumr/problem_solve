#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n=1000000000;
ll pow(ll a,ll b)
{
    if(b==1)
        return a;
    ll t=pow(a,b>>1);
    t=((t%n)*(t%n))%n;
    if(b&1)
        t=((a%n)*(t%n))%n;
    return t;
}
int main()
{
    ll x,y;
    cin>>x>>y;
    if(x>y)
        swap(x,y);
    ll sum=0;
    for(ll i=x;i<=y;i++)
    {
        sum=(sum+pow(i,i))%n;
    }
    cout<<sum<<endl;
}
