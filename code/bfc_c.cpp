#include<bits/stdc++.h>
using namespace std;
vector<int>a[100];
int dis[100];
int visit[100];
int path[100];
void bfs(int s,int e)
{
    memset(dis,-1,sizeof(dis));
    memset(visit,0,sizeof(visit));
    dis[s]=0;
    visit[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<a[u].size();i++)
        {
            int v=a[u][i];
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
void print(int x)
{
    if(x<=0)
        return;
    print(path[x]);
    cout<<x<<' ';
}
int main()
{
    int s,e;
    cin>>s>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int n,m;
    cin>>n>>m;
    bfs(n,m);
    cout<<dis[m]<<endl;
    print(e);
}
