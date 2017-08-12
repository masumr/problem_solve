#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=209;
ll mod=1000000;
ll dp[N][N];
ll fun(int n,int k){
    if(k==0)return 1;
    if(n==k)return 1;
    if(k==1)return n;
    if(dp[n][k]!=-1)return dp[n][k];
    return dp[n][k]=(fun(n-1,k-1)%mod+fun(n-1,k)%mod)%mod;
}
int main(){
    memset(dp,-1,sizeof dp);
    int n,k;
    while(scanf("%d%d",&n,&k) &&(n && k)){
        printf("%lld\n",fun(n+k-1,k-1));
    }
}
