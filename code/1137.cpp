#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[21][10044];
ll make;
ll coin[]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
ll count_coin(ll i,ll amount)
{
    if(i>=21)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll r1=0,r2=0;
    if(amount-coin[i]>=0)
        r1=count_coin(i,amount-coin[i]);
    r2=count_coin(i+1,amount);
    return dp[i][amount]=r1+r2;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>make)
        cout<<count_coin(0,make)<<endl;;
}
