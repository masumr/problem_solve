#include<bits/stdc++.h>
using namespace std;
const int N=10007;
vector<int>ed[N];
int vis[N];
void dfs(int n){
    vis[n]=1;
    for(int i=0;i<ed[n].size();i++){
        int v=ed[n][i];
        if(!vis[v])dfs(v);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        memset(vis,0,sizeof vis);
        int n,m,l;
        scanf("%d%d%d",&n,&m,&l);
        while(m--){
            int x,y;
            scanf("%d%d",&x,&y);
            ed[x].push_back(y);
        }
        while(l--){
            int x;
            scanf("%d",&x);
            if(!vis[x])dfs(x);
        }
        int count=0;
        for(int i=0;i<=n;i++){
            if(vis[i])count++;
            ed[i].clear();
        }
        printf("%d\n",count);
    }
}
