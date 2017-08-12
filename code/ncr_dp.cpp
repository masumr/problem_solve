#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[501][501];
ll ncr(int n,int r){
    if(n==r) return 1;
    if(r==1) return n;
    if(dp[n][r]!=-1) return dp[n][r];
    return dp[n][r]=ncr(n-1,r-1)+ncr(n-1,r);
}
int main(){
    int n,r;
    memset(dp,-1,sizeof dp);
    while(cin>>n>>r and(n!=0 and r!=0)){
        cout<<(ll)ncr(n,r)<<endl;
    }
}
