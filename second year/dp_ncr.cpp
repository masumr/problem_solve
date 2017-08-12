#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,ll>dp[10000];
ll ncr(int n,int r){
    if(n==r) return 1;
    if(r==1) return n;
    return (dp[n][r]==0)?ncr(n-1,r)+ncr(n-1,r-1):dp[n][r];
}
int main(){
    int n,r;
    //memset(dp,-1,sizeof(dp));
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
}
