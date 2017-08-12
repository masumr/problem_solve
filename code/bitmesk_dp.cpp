#include<bits/stdc++.h>
using namespace std;
int w[16][16];
int dp[1<<15+2];
int n;
int Set(int n,int pos){return n=n|(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int call(int mask){
    if(mask==(1<<n)-1) return 0;
    if(dp[mask]!=-1) return dp[mask];
    int ans=(1<<28);
    for(int i=0;i<n;i++)if(!(mask&(1<<i))){
        int price=w[i][i];
        for(int j=0;j<n;j++)if(i!=j and (mask&(1<<j)))     price+=w[i][j];
        ans=min(ans,price+call(Set(mask,i)));
    }
    return dp[mask]=ans;
}
int main(){
    cin>>n;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>w[i][j];
    cout<<call(0)<<endl;
}
