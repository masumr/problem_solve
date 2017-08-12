#include<cstdio>
#include<cmath>
typedef long long int ll;
ll bigmod(ll n,ll p){
    if(p==1)return n%1000;
    ll t=bigmod(n,p/2);
    t=(t*t)%1000;
    if(p&1)t=(t*n)%1000;
    return t;
}
ll ftd(ll n,ll p){
    double x=p*log10(n*1.0);
    //cout<<x<<endl;
    x-=floor(x);
    //cout<<x<<endl;
    x=pow(10,x);
    //cout<<x<<endl;
    while(x<100){
        x*=10;
    }
    return (ll)x;
}
int main(){
    ll n,p;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld",&n,&p);
        printf("%03lld...%03lld\n",ftd(n,p),bigmod(n,p));
    }
}
