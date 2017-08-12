#include<bits/stdc++.h>
using namespace std;
int visit[100];
int dis[100];
int path[100];
vector<int>adj[100];
void bfs(int s,int n)
{
    queue<int>q;
    q.push(s);
    memset(visit,0,sizeof(visit));
    memset(dis,-1,sizeof(dis));
    visit[s]=1;
    dis[s]=0;
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
                q.push(v);
                path[v]=u;
            }
        }
    }
}
void path_fun(int x)
{
    if(x<=0)return;
    path_fun(path[x]);
    cout<<x<<' ';
}
int main()
{
    int n,s,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin>>s>>n;
    bfs(s,n);
    cout<<dis[n]+1<<endl;
    path_fun(n);
}
