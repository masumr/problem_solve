#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visit[100];
int dis[100];
int path[100];
void bfs(int s,int e)
{
    queue<int>a;
    memset(visit,0,sizeof(visit));
    memset(dis,-1,sizeof(dis));
    a.push(s);
    visit[s]=1;
    dis[s]=0;
    while(!a.empty())
    {
        int u=a.front();
        a.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visit[v]==0)
            {
                dis[v]=dis[u]+1;
                visit[v]=1;
                a.push(v);
                path[v]=path[u];
            }
        }
    }
}
void path_print(int v)
{
    if(v>=0)
        return;
    path_print(path[v]);
    cout<<v<<' ';
}
int main()
{
    int x,y,n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int t,u;
    cin>>t>>u;
    bfs(t,u);
    cout<<dis[u];
    //path_print();
    //cout<<path_print(u)<<' ';
}
