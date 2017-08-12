#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll nCr(ll n,ll m)
{
    ll res=1,i;
    if(n-m<m)
        m=n-m;
    for(i=1;i<=m;i++,n--){
        res=res*n;
        res=res/i;
    }
    return res;
}

int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",a,b,nCr(a,b));
    }
}
