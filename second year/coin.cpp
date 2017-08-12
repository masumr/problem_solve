#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1007;
bitset<N>p;
vector<ll>v;
void sieve(){
    for(ll i=3;i*i<=N;i+=2)if(!p[i])for(ll j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(ll i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
ll dp[N+7][170];
int s;
ll coin(ll i,ll n){
    if(i==v.size()){
        if(n==0)return 1;
        else return 0;
    }
    if(dp[n][i]!=-1)return dp[n][i];
    ll p1=0,p2=0;
    if(n-v[i]>=0)p1=coin(i,n-v[i]);
    p2=coin(i+1,n);
    return dp[n][i]=p1+p2;
}
int main(){
    sieve();
    //for(int i=0;i<100;i++)cout<<v[i]<<' ';
    ll t;
    int c=0;
    scanf("%lld",&t);
    memset(dp,-1,sizeof dp);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll ss=coin(0,n);
        if(ss==0)printf("Case %d: Wrong\n",++c);
        else printf("Case %d: %lld\n",++c,ss);
    }
}
