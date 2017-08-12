#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[301][1001];
    int dp[301][1001];
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,i,j;
        scanf("%d",&n);
        memset(a,0,sizeof a);
        memset(dp,0,sizeof dp);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int l=n-1;
        for(i=n+1;i<n*2;i++){
            for(j=1;j<=l;j++) {
                    scanf("%d",&a[i][j]);
                }
            l--;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
            }
        }
        l=n-1;
        for(i=n+1;i<2*n;i++){
            for(j=1;j<=l;j++){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j+1])+a[i][j];            }
            l--;
        }
        printf("Case %d: %d\n",++c,dp[2*n-1][1]);
    }
}
