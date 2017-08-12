#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll f(ll x)
{
    if(x<=2)
        return 1;
    return f(x-1)+f(x-2);
}
ll g(ll y)
{
    if(y==0)
        return 0;
    return (g(y-1)+f((4*y)-1))%1007;
}
int main()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll max=0;
        for(ll i=1;i<=n;i++)
        {
            ll sum=(g(i));
            if(max<sum)
                max=sum;
        }
        cout<<max<<endl;
    }
}
