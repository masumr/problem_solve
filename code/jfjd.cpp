#include<bits/stdc++.h>
using namespace std;
int dp[10][100];
int cost[]={2,5,12,25};
int make;
int n;
int coin_change(int i,int amount,int count1)
{
    if(i>=4 && count1==0)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int r1=0,r2=0;
    if(amount-cost[i]>=0)
        r1=coin_change(i,amount-cost[i],count1--);
    r2=coin_change(i+1,amount,count1);
    return dp[i][amount]=r1+r2;
}
int main(){
    memset(dp,-1,sizeof(dp));
    while(cin>>make>>n)
        cout<<coin_change(0,make,n)<<endl;
}
