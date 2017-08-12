#include<bits/stdc++.h>
using namespace std;
const int size=10000;
int visit[size];
int dis[size];
int path[size];
vector<int>a[size];
void bfs(int s,int e)
{
    memset(dis,-1,sizeof(dis));
    memset(visit,0,sizeof(visit));
    queue<int>q;
    visit[s]=1;
    dis[s]=0;
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
                visit[v]=1;
                dis[v]=dis[u]+1;
                path[v]=u;
                q.push(v);
            }
        }
    }
}
void p(int e)
{
    if(e<=0)
        return;
    p(path[e]);
    cout<<e<<' ';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int s,e;
    cin>>s>>e;
    bfs(s,e);
    cout<<dis[e]<<endl;
    p(e);
}
