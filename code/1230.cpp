#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod(ll n,ll p,ll mod){
    if(p==0)return 1;
    if(p==1)return n;
    ll t=bigmod(n,p>>1,mod);
    t=(t*t)%mod;
    if(p&1)t=(t*n)%mod;
    return t;
}
int main(){
    ll x,y,n,t;
    while(scanf("%lld",&t)&& t!=0){
            while(t--){
                scanf("%lld%lld%lld",&x,&y,&n);
                printf("%lld\n",bigmod(x,y,n));
            }
    }

}
