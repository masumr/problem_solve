#include<bits/stdc++.h>
using namespace std;
int dp[10][10];
int wi[15];
int cost[15];
int n;
int cap;
int napsack(int i,int w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0;
    int profit2=0;
    if(w+wi[i]<=cap)
        profit1=cost[i]+napsack(i+1,w+wi[i]);
    profit2=napsack(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>cap;
    for(int i=1;i<=n;i++)
        cin>>wi[i]>>cost[i];
    cout<<napsack(1,0)<<endl;
}
