#include<bits/stdc++.h>
using namespace std;
const int N=1001;
int vis[N];
int dis[N];
vector<int>ed[N];
void bfs(int s){
    memset(vis,0,sizeof vis);
    memset(dis,-1,sizeof dis);
    dis[s]=0;
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            //cout<<v<<' '<<vis[v]<<endl;
            if(vis[v]==0){
                vis[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,e;
        scanf("%d%d",&n,&e);
        while(e--){
            int x,y;
            cin>>x>>y;
            ed[x].push_back(y);
            ed[y].push_back(x);
        }
        bfs(0);
        for(int i=1;i<n;i++)printf("%d\n",dis[i]);
        for(int i=0;i<=n;i++)ed[i].clear();
        if(t)cout<<endl;
    }
}
