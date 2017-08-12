#include<bits/stdc++.h>
using namespace std;
int cost[]={8,5,3,1};
int dp[4][100];
int make;
int coin_change(int i,int amount)
{
    if(i>=4)
    {
        if(amount==0)  return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-cost[i]>=0)
        ret1=coin_change(i,amount-cost[i]);
    ret2=coin_change(i+1,amount);
    return dp[i][amount]=ret1+ret2;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>make;
    cout<<coin_change(0,make)<<endl;
}
