#include<bits/stdc++.h>
using namespace std;
int visit[100];
int dis[100];
int path[100];
vector<int>a[100];
void bfs(int s,int e)
{
    memset(visit,0,sizeof(visit));
    memset(dis,-1,sizeof(dis));
    queue<int>q;
    q.push(s);
    visit[s]=1;
    dis[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<a[u].size();i++)
        {
            int v=a[u][i];
            if(!visit[v])
            {
                visit[v]=1;
                dis[v]=dis[u]+1;
                path[v]=u;
                q.push(v);
            }

        }
    }
}
void path1(int x)
{
    if(x<=0)
        return;
    path1(path[x]);
    cout<<x<<' ';
}
int main()
{
    int t;
    cin>>t;
    int x,y;
    while(t--)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int s,e;
    cin>>s>>e;
    bfs(s,e);
    cout<<dis[e]<<endl;
    path1(e);
}
