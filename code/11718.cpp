#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod(ll n,ll p,ll mod){
    if(p==0)return 1;
    if(p==1)return n;
    ll t=bigmod(n,p>>1,mod);
    t=(t*t)%mod;
    if(p&1) t=(t*n)%mod;
    return t;
}
int main(){
    int t,c=0;
    cin>>t;
    //cout<<bigmod(10,5,999)<<endl;
    while(t--){
        ll n,k,mod;
        cin>>n>>k>>mod;
        //k-=1;
        ll s=k*bigmod(n,k-1,mod);
        ll ans=0,x;
        for(ll i=0;i<n;i++){
            cin>>x;
            ans+=x;
        }
        ans=((ans%mod)*(s%mod))%mod;
        printf("Case %d: %lld\n",++c,ans);
    }

}
