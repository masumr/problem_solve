#include<bits/stdc++.h>
using namespace std;
const int N=1001;
vector<int>ed[N];
int dp[N][2];
int par[N];
int mincover(int u,int g){
    if(ed[u].size()==0)return 0;
    if(dp[u][g]!=-1)return dp[u][g];
    int sum=0;
    for(int i=0;i<ed[u].size();i++){
        int v=ed[u][i];
        if(v!=par[u]){
            par[v]=u;
            if(g==0)sum+=mincover(v,1);
            else sum+=min(mincover(v,1),mincover(v,0));
        }
    }
    return dp[u][g]=sum+g;
}
int main(){
    int n;
    while(scanf("%d",&n) && n){
        memset(dp,-1,sizeof dp);
        for(int i=1;i<=n;i++){
            int t;
            scanf("%d",&t);
            while(t--){
                int u;
                scanf("%d",&u);
                ed[i].push_back(u);
                //ed[u].push_back(i);
            }
        }
        int ans=min(mincover(1,1),mincover(1,0));
        int ck=max(ans,1);
        printf("%d\n",ck);
        for(int i=1;i<=n;i++)ed[i].clear();
    }
}
