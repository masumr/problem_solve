#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod=100000007;
int dp[10007][107];
int coin[107];
int k;
int coin_change(int i,int n){
    if(i>=k){
        if(n==0) return 1;
        else return 0;
    }
    if(dp[n][i]!=-1) return dp[n][i];
    int p1=0,p2=0;
    if(n-coin[i]>=0)p1=coin_change(i,n-coin[i]);
    p2=coin_change(i+1,n);
    dp[n][i]=(p1+p2)%mod;
    return dp[n][i];
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof dp);
        int n;
        scanf("%d%d",&k,&n);
        for(int i=0;i<k;i++)scanf("%d",&coin[i]);
        printf("Case %d: %d\n",++c,coin_change(0,n));
    }
}
