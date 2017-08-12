#include<bits/stdc++.h>
using namespace std;
int dp[10][10];
int wi[100];
int cost[100];
int n;
int cap;
int napsack(int i,int w)
{
    if(i==n) return 0;
    if(dp[i][w]!=-1) return dp[i][n];
    int p1=0,p2=0;
    if(w+wi[i]<=cap)
        p1=cost[i]+napsack(i+1,w+wi[i]);
    p2=napsack(i+1,w);
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>cap;
    for(int i=0;i<n;i++)
        cin>>wi[i]>>cost[i];
    cout<<napsack(0,0)<<endl;;
}
