#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=23;
ll dp[N][N];
int main(){
    ll v;
    int n;
    while(cin>>n>>v){
        //memset(dp,0,sizeof dp);
        dp[n][1]=v;
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n;j++){
                if(i==n && j==1)continue;
                if(i>=j){
                    ll v1=0,v2=0;
                    for(int k=i+1;k<=n;k++)v1=max(v1,dp[k][1]+dp[k][j]);
                    for(int k=1;k<j;k++)v2=max(v2,dp[i][k]+dp[n][k]);
                    dp[i][j]=v1+v2;
                }
                else{
                    ll v1=0;
                    for(int k=i;k<j;k++)v1=max(v1,dp[i][k]+dp[k+1][j]);
                    dp[i][j]=v1;
                }
            }
        }
        cout<<dp[1][n]<<endl;
        //printf("%lld\n",dp[1][n]);
    }
}
