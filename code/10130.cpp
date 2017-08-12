#include<bits/stdc++.h>
using namespace std;
int dp[35][1334];
int cost[1034];
int weight[1034];
int n;
int napsack(int i,int w,int cap)
{
    if(i==n) return 0;
    if(dp[w][i]!=-1)  return dp[w][i];
    int p1=0,p2=0;
    if(w+weight[i]<=cap)
        p1=cost[i]+napsack(i+1,w+weight[i],cap);
    p2=napsack(i+1,w,cap);
    dp[w][i]=max(p1,p2);
    return dp[w][i];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>cost[j]>>weight[j];
        int x;
        cin>>x;
        int sum=0;
        while(x--)
        {
            int y;
            memset(dp,-1,sizeof(dp));
            cin>>y;
            sum+=napsack(0,0,y);
        }
        cout<<sum<<endl;

    }
}
