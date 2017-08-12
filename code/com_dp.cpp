#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[20][20];
ll com(ll n,ll r)
{
    if(n==r) return 1;
    if(r==0) return 1;
    if(r==1) return n;
    if(dp[n][r]!=-1)
        return dp[n][r];
    else
    {
        dp[n][r]=com(n-1,r)+com(n-1,r-1);
        return dp[n][r];
    }
}
int main()
{
    ll n,r;
    memset(dp,-1,sizeof(dp));
    while(cin>>n>>r)
        cout<<com(n,r)<<endl;
}
