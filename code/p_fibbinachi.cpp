#include<bits/stdc++.h>
using namespace std;
int dp[20];
int fibbinachi(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    if(dp[n]!=-1)
        return dp[n];
    else
    {
        dp[n]=fibbinachi(n-2)+fibbinachi(n-1);
        return dp[n];
    }
}
int main()
{
    int n=10;
    for(int i=0;i<=n;i++)
        dp[i]=-1;
    for(int i=0;i<=n;i++)
        cout<<fibbinachi(i)<<' ';
    cout<<endl;
}
