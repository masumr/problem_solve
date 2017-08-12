#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
ll mod=1000000007;
ll bigmod(ll n,ll p){
    if(p==1)return n;
    ll t=bigmod(n,p>>1);
    t=((t%mod)*(t%mod))%mod;
    if(p&1)t=((t%mod)*(n%mod))%mod;
    return t;
};
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll val=0;
        for(int i=1;i<=n;i++){
            val=(val+bigmod(k,gcd(n,i)))%mod;
        }
        cout<<val<<endl;
        val=((val%mod)*(bigmod(n,mod-2)%mod))%mod;
        printf("Case %d: %lld\n",++c,val);
    }
}
