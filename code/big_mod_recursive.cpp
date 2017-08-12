#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll big_mod(ll n,ll p,ll m)
{
    if(!n) return 1;
    ll x;
    if(p&1) x=(x*n)%m;
    n=(n*n)%m;
    x=(n,p>>1,m);
    return x;
}
int main()
{
    ll x,y,z;
    cin>>x>>y>>z;
    cout<<big_mod(x,y,z)<<endl;
}
