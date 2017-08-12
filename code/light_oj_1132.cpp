#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned int ul;
ll mod=4294967296;
ll bigmod(ll n,ll p,ll mod){
    if(p==0)return 1;
    if(p==1) return n;
    ll t=bigmod(n,p>>1,mod);
    t=((t%mod)*(t%mod))%mod;
    if(p&1)t=((t%mod)*(n%mod))%mod;
    return t;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    ll a[52][51];

    while(t--){
        ll n,p;
        scanf("%lld%lld",&n,&p);
        ll x=n/mod;
        ll y=n%mod;
        ll sum=0;
        sum=
        sum=((sum%mod)*(x%mod))%mod;
        for(ll i=1;i<=y;i++){
            sum+=bigmod(i,p,mod);
            sum%=mod;
        }
        printf("Case %d: %lld\n",++c,sum);

    }
}
