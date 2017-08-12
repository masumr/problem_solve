#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll big_mod(ll n,ll p,ll m)
{
    ll r=1;
    while(p>0)
    {
        if(p%2==1)
            r=(r*n)%m;
        p/=2;
        n=(n*n)%m;
    }
    return r;
}
int main()
{
    ll x,y,z;
    cin>>x>>y>>z;
    cout<<big_mod(x,y,z)<<endl;

}
