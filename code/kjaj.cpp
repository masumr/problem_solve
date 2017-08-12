#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[100];
int c(int n)
{
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=c(i)*c(n-i-1);
    return sum;
}
int main()
{
    int n,i;
    memset(dp,-1,sizeof(dp));
    while(cin>>n){
        if(i==1)
            cout<<endl;
        cout<<c(n)<<endl;
        i=1;
    }
}
