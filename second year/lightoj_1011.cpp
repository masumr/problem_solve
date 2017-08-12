#include<bits/stdc++.h>
using namespace std;
int w[17][17];
int dp[17][(1<<16)+3];
int n;
int call(int mask,int l){
    if(l==n)return 0;
    if(dp[l][mask]!=-1)return dp[l][mask];
    int ans=0;
    for(int i=0;i<n;i++){
        if((mask&(1<<i)))continue;
        ans=max(ans,(call((mask|(1<<i)),l+1)+w[l][i]));
    }
    return dp[l][mask]=ans;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&w[i][j]);
        memset(dp,-1,sizeof dp);
        printf("Case %d: %d\n",++c,call(0,0));
    }
}
