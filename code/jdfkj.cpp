#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=100000007;
ll bigmod(ll n,ll p){
    if(p==1)return n;
    ll t=bigmod(n,p/2);
    t=((t%mod)*(t%mod))%mod;
    if(n&1)t=((t%mod)*(n%mod))%mod;
    return t;
}
int main(){
    ll x,n;
    while(cin>>x>>n){
        ll sum=(((bigmod(x,n)%mod)-1)*(bigmod(x-1,mod-2)))%mod;
        sum=((sum+mod)-1)%mod;
        cout<<sum<<endl;
    }
}
