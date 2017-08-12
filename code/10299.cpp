#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int nn=31700;
bitset<nn>p;
vector<ll>v;
void sieve(){
    for(ll i=4;i<=nn;i+=2)p[i]=1;
    for(ll i=3;i*i<=nn;i+=2)if(p[i]==0)for(ll j=i*i;j<=nn;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(ll i=3;i<=nn;i+=2)if(p[i]==0)v.push_back(i);
}
ll rp(ll n){
    ll sum=n;
    for(int i=0;i<v.size() && v[i]*v[i]<=n;i++){
        if(n%v[i]==0){
            sum=(sum/v[i])*(v[i]-1);
            while(n%v[i]==0)n/=v[i];
        }
    }
    if(n>1)sum=(sum/n)*(n-1);
    return sum;
}
int main(){
    ll n;
    sieve();
    while(scanf("%lld",&n)==1){
        if(n==0)break;
        //if(p[n]==0)printf("%lld\n",n-1);
        if(n==1)cout<<0<<endl;
        else if(n<=nn){
            if(p[n]==0)printf("%lld\n",n-1);
            else printf("%lld\n",rp(n));
        }
        else printf("%lld\n",rp(n));
    }
}
