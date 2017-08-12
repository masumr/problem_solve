#include<bits/stdc++.h>
using namespace std;
int n,k;
int dp[100][100];
int cost[100],wei[100];
int napsack(int i,int w){
    if(i==n+1)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int p1=0,p2=0;
    if(w+wei[i]<=k)p1=napsack(i+1,w+wei[i])+cost[i];
    p2=napsack(i+1,w);
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}
int main(){
    memset(dp,-1,sizeof dp);
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>wei[i]>>cost[i];
    int to=napsack(1,0);
    cout<<to<<endl;
}
