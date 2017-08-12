#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int cost[100],wi[100];
int n,cap;
int napshak(int i,int w){
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int p1=0,p2=0;
    if(w+wi[i]<=cap) p1=cost[i]+napshak(i+1,w+wi[i]);
    p2=napshak(i+1,w);
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}
int main(){
    memset(dp,-1,sizeof dp);
    cin>>n>>cap;
    for(int i=1;i<=n;i++)cin>>wi[i]>>cost[i];
    cout<<napshak(1,0)<<endl;
}
