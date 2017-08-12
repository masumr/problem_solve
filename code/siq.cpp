#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1000000007;
ll bigmod(ll b,ll p){
    if(p==0)return 1;
    if(p==1)return b%mod;
    ll t=bigmod(b,p>>1);
    t=((t%mod)*(t%mod))%mod;
    if(p&1)t=((t%mod)*(b%mod))%mod;
    return t;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll n,b,ss;
        scanf("%lld%lld",&n,&b);
        ll n1=n/2;
        //cout<<(n1+1)*2<<endl;
        ll sum=(((bigmod(b,(n1+1)*2)-1)%mod)*(bigmod(b*b-1,mod-2)%mod))%mod;
        ss=sum;
        sum=((sum+mod)-(n1+1))%mod;
        sum=(sum*bigmod(b-1,mod-2))%mod;
        if(n&1)sum=((ss%mod)+(sum%mod))%mod;
        printf("Case %d: %lld\n",++c,sum%mod);
    }
}
