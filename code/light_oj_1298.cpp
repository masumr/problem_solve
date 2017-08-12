#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=3600;
bitset<N>p;
ll mod=1000000007;
vector<int>v;
ll dp[501][501];
void sieve(){
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
ll bigmod(ll n,ll p){
    if(p==1)return n;
    ll t=bigmod(n,p>>1);
    t=((t%mod)*(t%mod))%mod;
    if(p&1)t=((t%mod)*(n%mod))%mod;
    return t;
}
int k,pp,len;
ll fun(int n,int kk){
    //cout<<n<<' '<<kk<<endl;
    if(n==-1){
        return 1;
    }
    if(dp[n][kk]!=-1)return dp[n][kk];
    ll p1=0,p2=0;
    if(kk>=0){
        p1=((v[kk]%mod)*(fun(n-1,kk)%mod))%mod;
        if(kk<pp){
            p2=fun(n,kk-1)%mod;
        }
    }
    //cout<<n<<' '<<kk<<' '<<p1<<' '<<p2<<endl;
    return dp[n][kk]=(p1+p2)%mod;
}
int main(){
    sieve();
    int t,c=0;
    scanf("%d",&t);
    memset(dp,-1,sizeof dp);
    while(t--){
        scanf("%d%d",&k,&pp);
        len=k-pp;
        ll value=1;
        for(int i=0;i<pp;i++){
            value=(value*(v[i]-1))%mod;
        }
         ll ss=fun(len-1,pp-1);
         //cout<<ss<<endl;
         value=((ss%mod)*(value%mod))%mod;
         printf("Case %d: %lld\n",++c,value);
    }
}
