#include<bits/stdc++.h>
using namespace std;
const int N=103;
int dp[N][N];
int a[N][N];
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=N-1;i++){
        dp[i][0]=0;
        dp[0][i]=0;
    }
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)scanf("%d",&a[i][j]);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                dp[i][j]=a[i][j]+max(dp[i][j-1],dp[i-1][j]);
            }
        }
        printf("%d\n",dp[n][m]);
    }
}
