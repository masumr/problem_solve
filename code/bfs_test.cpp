#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visit[100];
int dis[100];
int path[100];
void bfs(int s,int e)
{
    queue<int>q;
    memset(dis,-1,sizeof(dis));
    memset(visit,0,sizeof(visit));
    dis[s]=0;
    q.push(s);
    visit[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(!visit[v])
            {
                dis[v]=dis[u]+1;
                visit[v]=1;
                path[v]=u;
                q.push(v);
            }
        }
    }
}

void path_p(int e)
{
    if(e<=0)
        return;
    path_p(path[e]);
    cout<<e<<' ';
}
int main(){
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int s,e;
    cin>>s>>e;
    bfs(s,e);
    cout<<dis[e]<<endl;
    path_p(e);

}
