#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod_recursion(ll n,ll p,ll m)
{
    if(p==0)
        return 1;
    ll ret=bigmod_recursion(n,p>>1,m);
    ret=(ret*ret)%m;
    if(p&1)
        ret=(ret*n)%m;
    return ret;
}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<bigmod_recursion(a,b,c)<<endl;
}
