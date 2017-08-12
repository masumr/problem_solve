#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1000003;
ll bigmod(ll n,ll p){
    if(p==1) return n;
    ll t=bigmod(n,p>>1);
    t=((t%mod)*(t%mod))%mod;
    if(p&1) t=(n*t)%mod;
    return t;
}
ll v[1000001];
int main(){
    v[0]=1;
    for(int i=1;i<=1000001;i++){
        v[i]=(v[i-1]*i)%mod;
    }
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll n,r;
        scanf("%lld %lld",&n,&r);
        printf("Case %d: ",++c);
        if(n==r && r==1) cout<<1<<endl;
        else{
            ll sum=(v[r]*v[n-r])%mod;
            sum=(v[n]*bigmod(sum,mod-2))%mod;
            printf("%lld\n",sum);
        }
    }
}
