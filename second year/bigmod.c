#include<stdio.h>
#define ll long long
int mod=1000;
ll bigmod(ll n,ll p){
    if(p==0)return 1;
    if(p==1)return n%mod;
    ll t=bigmod(n,p/2);
    t=(t*t)%mod;
    if(p%2)t=(t*n)%mod;
    return t;
}
int main(){
    ll n,p;
    scanf("%lld %lld",&n,&p);
    printf("%d ^ %d last 3 digit is: %03lld\n",n,p,bigmod(n,p));
}
