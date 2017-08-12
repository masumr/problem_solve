#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[4][1001];
ll coin[101];
ll takan_i[101];
ll make;
int n,k;
ll coin_change(int i,int amount,int count)
{
    if(i>=4)
    {
        if(amount==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int r1=0,r2=0;
    if(amount-coin[i]>=0 && count<takan_i[i])
        r1=coin_change(i,amount-coin[i],count++);
    r2=coin_change(i+1,amount,count);
    return dp[i][amount]=r1+r2;
}
int main()
{
    int t;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    for(int f=1;f<=t;f++){
        cin>>n>>make;
        for(int j=0;j<n;j++)
        {
            cin>>coin[j];
        }
        for(int j=0;j<n;j++)
            cin>>takan_i[j];
        printf("Case %d: %lld\n",f,coin_change(0,make,0)%100000007);
    }
}
