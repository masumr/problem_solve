#include<bits/stdc++.h>
using namespace std;
int dp[201][21];
vector<int>v[22];
int n,m;
int rec(int b,int g){
    if(g==n)return 0;
    if(dp[b][g]!=-1)return dp[b][g];
    bool ck=1;
    for(int i=0;i<v[g].size();i++){
        if(b-v[g][i]>=0)dp[b][g]=max(dp[b][g],rec(b-v[g][i],g+1)+v[g][i]);
        if(dp[b][g]>0)ck=0;
    }
    if(ck)return INT_MIN;
    return dp[b][g];
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof dp);
        scanf("%d%d",&m,&n);
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            while(x--){
                int l;
                scanf("%d",&l);
                v[i].push_back(l);
            }
        }
        int mx=rec(m,0);
        if(mx<=0)printf("no solution\n");
        else  printf("%d\n",mx);
        for(int i=0;i<=n;i++)v[i].clear();
    }
}
