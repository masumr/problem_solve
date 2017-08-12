#include<bits/stdc++.h>
using namespace std;
int dp[50][50];
int ncr(int n,int r){
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]!=-1) return dp[n][r];
    return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
}
int main(){
    int n,r;
    memset(dp,-1,sizeof dp);
    while(cin>>n>>r)cout<<ncr(n,r)<<endl;
}
