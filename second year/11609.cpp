#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod(ll n,ll p,ll m){
    if(p==0) return 1;
    if(p==1) return n%m;
    ll t=bigmod(n,p>>1,m);
    t=((t%m)*(t%m))%m;
    if(p&1) t=((t%m)*(n%m))%m;
    return t;
}
int main(){
    int t,c=0;
    ll mod=1000000007;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll pp=2;
        ll ans=((n%mod)*(bigmod(pp,n-1,mod)%mod))%mod;
        printf("Case #%d: %lld\n",++c,ans);
    }
}
