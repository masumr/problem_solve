#include<bits/stdc++.h>
using namespace std;
const int size=30012;
vector<int>edge[size],cost[size];
int dis[size];
int vis[size];
const int infinity=10044;
int n;
int bfs(int s){
    priority_queue<int>q;
    q.push(s);
    dis[s]=0;
    int mx=0;
    while(!q.empty())
    {
        int u=q.top();
        q.pop();
        int ucost=dis[u];
        for(int j=0;j<edge[u].size();j++)
        {
            int v=edge[u][j];
            int vcost=cost[u][j]+ucost;
            if(dis[v]>vcost)
            {
                dis[v]=vcost;
                mx=max(mx,vcost);
                q.push(v);
            }
        }
    }
    return mx;
}
int main(){
    int c=0;
    int t;
    int u,v,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int mx=-1;
        for(int j=0;j<=n;j++)
            dis[j]=infinity;
        for(int j=0;j<n-1;j++){
            scanf("%d%d%d",&u,&v,&w);
            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[v].push_back(w);
            cost[u].push_back(w);
            mx=max(mx,bfs(v));
        }
        printf("Case %d: %d\n",++c,mx);
        for(int i=0;i<=n;i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }

}
