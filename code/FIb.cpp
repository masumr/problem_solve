#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
ll fib(ll n,ll mod){
    if(n<2) return n;
    if(n==2) return 1;
    ll k=n>>1;
    ll a=fib(k+1,mod);
    ll b=fib(k,mod);
    if(n&1) return (((a%mod)*(a%mod))%mod+((b%mod)*(b%mod)))%mod;
    else return ((b%mod)*((2*a)%mod-b))%mod;
}
int main()
{
    ll n,m;
    while(cin>>n>>m){
        ll mod=1<<m;
        cout<<fib(n,mod)<<endl;
    }
}
