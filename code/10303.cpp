#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[1010];
ll c(ll n)
{
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
        sum+=c(i)*c(n-i-1);
    return sum;
}
int main()
{
    ll n;
    memset(dp,-1,sizeof(dp));
    while(cin>>n)
    {
        cout<<c(n-2)<<endl;
    }
}
