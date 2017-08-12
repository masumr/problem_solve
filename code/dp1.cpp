#include<bits/stdc++.h>
using namespace std;
int dp[100];
int dp1(int n)
{
    if(n==0 || n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=dp1(n-1)+dp1(n-2);
    return dp[n];
}
int dp3[100];
int dp2(int n)
{
    dp3[0]=1,dp3[1]=1;
    for(int i=2;i<=n;i++)
        dp3[i]=dp3[i-1]+dp3[i-2];
}
int main()
{
    int n;
    cin>>n;
    cout<<dp1(n)<<' '<<dp2[n]<<endl;
}
