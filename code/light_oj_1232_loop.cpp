#include<bits/stdc++.h>
using namespace std;
int mod=100000007;
int dp[10007];
int coin[107];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int k,n;
        memset(dp,0,sizeof dp);
        scanf("%d%d",&k,&n);
        for(int i=0;i<k;i++)scanf("%d",&coin[i]);
        dp[0]=1;
        int i,j,x;
        for(i=0;i<k;i++){
            for(j=coin[i],x=0;j<=n;j++,x++){
                dp[j]=(dp[j]+dp[x])%mod;
            }
        }
        printf("Case %d: %d\n",++c,dp[n]);
    }
}
