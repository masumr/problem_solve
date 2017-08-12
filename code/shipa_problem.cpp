#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fan(ll y,ll x)
{
    ll i=0,sum=1;
    if(x==0)
        return 1;
    if(x==1)
        return 2;
    ll t=fan(y,x/2);
    return (t*t*fan(y,x%2))%33554431;
}
int main()
{
    ll n;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        ll number=(fan(2,n+1)-1);
        printf("Case %d: %lld\n",i,number);
    }
    return 0;

}
