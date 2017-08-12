#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1000000007;
ll bigmod(ll n,ll p){
    if(p==0)return 1;
    if(p==1)return n%mod;
    ll t=bigmod(n,p/2);
    t=((t%mod)*(t%mod))%mod;
    if(p&1)t=((t%mod)*(n%mod))%mod;
    return t;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll sum=0;
        if(n==1)printf("26\n");
        else if(n==2)printf("%d\n",26*26);
        else{
            if(n%2)
                sum=((bigmod(26,3)%mod)*(bigmod(52,n-3)%mod))%mod;
            else
                sum=((bigmod(26,4)%mod)*(bigmod(52,n-4)%mod))%mod;
            printf("%lld\n",sum);
        }
    }
}
