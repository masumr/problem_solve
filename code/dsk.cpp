#include<bits/stdc++.h>
using namespace std;
int a[4],n;
int dp[4002][3][4002];
int ss(int n,int i,int k){
    if(i==3){
        if(n==0)return k;
        else return 0;
    }
    if(dp[n][i][k]!=-1)return dp[n][i][k];
    int p1=0,p2=0;
    if(n-a[i]>=0)p1=ss(n-a[i],i,k+1);
    p2=ss(n,i+1,k);
    return dp[n][i][k]=max(p1,p2);
}
int main(){
    scanf("%d",&n);
    memset(dp,-1,sizeof dp);
    for(int i=0;i<3;i++)scanf("%d",&a[i]);
    cout<<ss(n,0,0)<<endl;
}
