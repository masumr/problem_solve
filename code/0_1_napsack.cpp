#include<bits/stdc++.h>
using namespace std;
int w[100],c[100];
int dp[100][100];
int n,cap;
int napsack(int i,int k){
    if(i==n+1) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    int p1=0,p2=0;
    if(k+w[i]<=cap) p1=c[i]+napsack(i+1,k+w[i]);
    p2+=napsack(i+1,k);
    return dp[i][k]=max(p1,p2);
}
int main(){
    while(cin>>n>>cap){
        memset(dp,-1,sizeof dp);
        for(int i=1;i<=n;i++) cin>>w[i]>>c[i];
        cout<<napsack(1,0)<<endl;
    }
}
