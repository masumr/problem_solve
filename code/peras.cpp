#include<bits/stdc++.h>
using namespace std;
int dp[20];
int dif(int n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    else{
        dp[n]=dif(n-1)+dif(n-3)+dif(n-4);
        return dp[n];
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int x;
    while(cin>>x)
        cout<<dif(x)<<endl;
}
