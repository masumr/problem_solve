#include<bits/stdc++.h>
using namespace std;
const int M=100;
int dp[M][5];
int par[M];
vector<int>ed[M];
int f(int u,int g){
    if(ed[u].size()==0)return 0;
    if(dp[u][g]!=-1)return dp[u][g];
    int sum=0;
    //cout<<u<< ' ';
    for(int i=0;i<ed[u].size();i++){
        int v=ed[u][i];
        if(v!=par[u]){
            par[v]=u;
            if(g==0){
                sum+=f(v,1);
            }
            else{
                sum+=min(f(v,0),f(v,1));
            }
        }
    }
    return dp[u][g]=sum+g;
}
int main(){
    memset(dp,-1,sizeof dp);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int u,v;
        cin>>u>>v;
        ed[u].push_back(v);
        ed[v].push_back(u);
    }
    int ans=min(f(1,1),f(1,0));
    cout<<ans<<endl;
}
