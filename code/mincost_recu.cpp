#include<bits/stdc++.h>
using namespace std;
const int N=100;
int dp[N][N];
int cost[N][N];
int mincost(int l1,int l2){
    if(l1<0 || l2<0)return INT_MAX;
    if(l1==0 && l2==0)return cost[l1][l2];
    if(dp[l1][l2]!=-1)return dp[l1][l2];
    return dp[l1][l2]=cost[l1][l2]+min(mincost(l1-1,l2),min(mincost(l1,l2-1),mincost(l1-1,l2-1)));
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&cost[i][j]);
    int l1,l2;
    scanf("%d%d",&l1,&l2);
    memset(dp,-1,sizeof dp);
    printf("%d\n",mincost(l1,l2));
}
